# GAMPBF - Galleon AC Mod Pack Bug Fix

Mod de DayZ para corrigir bugs relacionados à compatibilidade entre AC-Mod-Pack e Van_Galleon.

Versão: 1.0  
Autores: Thaís (@thaai_n) & Lucas (@luka__is)  
Créditos: João Ricardo (@kerodrach)

## Estrutura do Projeto

```
GAMPBF/
│   
├── config.cpp                        # Configuração principal do mod
├── README.md                         # Documentação do patch
└── scripts/
    └── 4_World/
        └── boatscript.c              # Script de correção do bug
            
```

## Correções Implementadas

### boatscript.c
```cpp
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
```

## Sobre as Correções

Este patch foca especificamente no hook do `OnEngineStart` para o `Van_Galleon`, evitando conflitos com o AC-Mod-Pack e os crashes associados.

Se o AC-Mod-Pack também sobrescrever outros métodos (EEInit, OnVariablesSynchronized, DeferredInit, EOnFrame, destructor), serão necessários patches adicionais.

