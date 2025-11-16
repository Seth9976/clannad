// 函数: sub_4e7460
// 地址: 0x4e7460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg4
arg4 = arg3
*edi = 0

if (arg2 != 0)
    *arg2 = arg3

int32_t arg_4

if (arg_4 s>= 0x82)
    *edi = 0
    
    if (arg2 != 0)
        *arg2 = arg3
else
    int32_t eax_1 = sub_4e8c00(&arg_4, &arg4, arg3, &arg_4, 0)
    char* ecx
    
    if (eax_1 != 0)
        ecx = arg4
    
    if (eax_1 == 0 || *ecx != 0x5d)
        return 0
    
    *edi = arg_4
    
    if (arg2 != 0)
        *arg2 = &ecx[1]

return 1
