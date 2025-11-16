// 函数: __getenv_helper_nolock
// 地址: 0x763115
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = data_b94f38

if (data_4ecd2d8 == 0)
    return nullptr

PSTR ecx

if (esi != 0)
label_76314c:
    
    if (arg1 != 0)
        void* eax_3 = _strlen(arg1)
        
        while (true)
            char* ecx_3 = *esi
            
            if (ecx_3 == 0)
                break
            
            if (_strlen(ecx_3) u> eax_3)
                char* eax_5 = *esi
                
                if (*(eax_5 + eax_3) == 0x3d && __mbsnbicoll(eax_5, arg1, eax_3) == 0)
                    return *esi + 1 + eax_3
            
            esi = &esi[1]
else if (data_b94f3c != esi && ___wtomb_environ(ecx) == 0)
    esi = data_b94f38
    
    if (esi != 0)
        goto label_76314c
return nullptr
