// 函数: sub_464730
// 地址: 0x464730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg3
*arg2 = 0xffffffff
*arg4 = 0
*arg5 = 0
char* edx_1

if (edi == 0 || *edi == 0)
    edx_1 = arg6
    
    if (edx_1 == 0)
        *arg5 = edx_1.b
        return &edx_1[1]
else
    int32_t eax_1
    int32_t ecx
    eax_1, ecx = sub_464330(arg3)
    int32_t eax_2
    
    if (eax_1 != 0)
        eax_2 = sub_428820(ecx, edi)
        *arg2 = eax_2
    
    if (eax_1 == 0 || eax_2 == 0xffffffff)
        return 0
    
    edx_1 = arg6
    *arg4 = 1
    
    if (edx_1 == 0)
    label_4647b2:
        sub_4cfd70(arg5, edi)
        sub_4c3960(arg5, 0)
        return 1
    
    if (*edx_1 == 0x3f)
        if (edx_1[1] != 0x3f || edx_1[2] != 0x3f || eax_2 u> 0x1ff)
            goto label_4647b2
        
        edx_1 = eax_2 * 0x6c + 0x1382f9c
        
        if (*edx_1 == 0)
            goto label_4647b2

sub_4cfd70(arg5, edx_1)
return 1
