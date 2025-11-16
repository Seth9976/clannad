// 函数: ___crtGetEnvironmentStringsW
// 地址: 0x755c04
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
PWSTR penv = GetEnvironmentStringsW()

if (penv == 0)
    return penv

int32_t* ebx_1 = nullptr
PWSTR penv_1 = penv

if (*penv != 0)
    while (true)
        penv_1 = &penv_1[1]
        
        if (*penv_1 == 0)
            penv_1 = &penv_1[1]
            
            if (*penv_1 == 0)
                break

int32_t* eax = sub_74cd17(penv_1 - penv + 2)

if (eax != 0)
    sub_748840(eax, penv, penv_1 - penv + 2)
    ebx_1 = eax

FreeEnvironmentStringsW(penv)
return ebx_1
