using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;
public class XrSocketTagInteractor : XRSocketInteractor
{
    public string tagToCollect;
    private LevelManager levelManager;
    void Start()
    {
        levelManager = LevelManager.Instance;
    }
    public override bool CanHover(IXRHoverInteractable interactable)
    {
        return base.CanHover(interactable) && interactable.transform.tag == tagToCollect;
    }
    public override bool CanSelect(XRBaseInteractable interactable)
    {
        return base.CanSelect(interactable) && interactable.transform.tag == tagToCollect;
    }
    protected override void OnSelectEntered(XRBaseInteractable interactable)
    {
        base.OnSelectEntered(interactable);
        levelManager.addObjectSelected();
        if (SceneManager.GetActiveScene().name == "CentroCocotero")
        {
            interactable.gameObject.SetActive(false);
        }
        else if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            interactable.gameObject.GetComponent<Outline>().enabled = false;
        }
    }
    protected override void OnSelectExited(XRBaseInteractable interactable)
    {
        base.OnSelectExited(interactable);

        if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            levelManager.removeObjectSelected();
            interactable.gameObject.GetComponent<Outline>().enabled = true;
        }
    }
}
