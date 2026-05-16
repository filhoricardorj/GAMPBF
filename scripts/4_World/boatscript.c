modded class BoatScript
{
    override void OnEngineStart()
    {
        string typeName = GetType();

        // Ignora completamente o Van_Galleon
        // para evitar conflito com AC-Mod-Pack
        if (typeName.Contains("Van_Galleon"))
        {
            Print("[GAMPBF] Ignorando OnEngineStart para Van_Galleon");
            return;
        }

        super.OnEngineStart();
    }
}
