using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;
public class XrSocketTagInteractor : XRSocketInteractor
{
    public string tagToCollect;
    public override bool CanHover(IXRHoverInteractable interactable)
    {
        return base.CanHover(interactable) && interactable.transform.tag == tagToCollect;
    }
    public override bool CanSelect(IXRSelectInteractable interactable)
    {
        return base.CanSelect(interactable) && interactable.transform.tag == tagToCollect;
    }

    protected override void OnSelectEntered(SelectEnterEventArgs args)
    {
        base.OnSelectEntered(args);
        LevelManager.Instance.addObjectSelected();
        GameObject gameObject = args.interactableObject.transform.gameObject;

        if (SceneManager.GetActiveScene().name == "CentroCocotero")
        {
            gameObject.SetActive(false);
        }
        else if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            gameObject.GetComponent<Outline>().enabled = false;
        }

    }

    protected override void OnSelectExited(SelectExitEventArgs args)
    {
        base.OnSelectExited(args);

        if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            LevelManager.Instance.removeObjectSelected();
            args.interactableObject.transform.gameObject.GetComponent<Outline>().enabled = true;
        }
    }

}
