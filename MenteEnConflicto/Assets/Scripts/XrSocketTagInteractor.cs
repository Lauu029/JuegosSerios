using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
public class XrSocketTagInteractor : XRSocketInteractor
{
    public string tagToCollect;
    public LevelManager levelManager;
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
    }
}