// 函数: sub_4d2220
// 地址: 0x4d2220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t edi = arg3

if (edi s> esi)
    int32_t eax = edi
    edi = esi
    esi = eax

int32_t ecx = arg5

if (arg2 s> ecx)
    int32_t eax_1 = arg2
    arg2 = ecx
    ecx = eax_1

int32_t ebx = *arg6

if (ebx s> *arg8)
    *arg6 = *arg8
    *arg8 = ebx

int32_t ebx_4 = *arg7
int32_t* eax_7 = arg9
int32_t* ebx_6 = arg8

if (ebx_4 s> *eax_7)
    *arg7 = *eax_7
    eax_7 = arg9
    *eax_7 = ebx_4
    ebx_6 = arg8

if (edi s<= *ebx_6)
    int32_t ebx_10 = *arg6
    
    if (esi s>= ebx_10 && arg2 s<= *eax_7)
        int32_t* eax_10 = arg9
        
        if (ecx s>= *arg7)
            if (edi s> ebx_10)
                *arg6 = edi
                eax_10 = arg9
            
            if (esi s< *arg8)
                *arg8 = esi
            
            if (arg2 s> *arg7)
                *arg7 = arg2
            
            if (ecx s< *eax_10)
                *eax_10 = ecx
            
            return 1

return 0
