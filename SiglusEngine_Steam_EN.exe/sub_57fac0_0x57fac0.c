// 函数: sub_57fac0
// 地址: 0x57fac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
void* eax = &data_f8d300
void* ecx = &data_8fcb18

if (arg1 == 0)
    while ((*(eax + 0xc) == 0 && *eax == 0) || *ecx != 0)
        edx += 1
        ecx += 0x2d0
        eax += 0x3920
        
        if (edx s>= 0x40)
            return 0
else
    while (*(eax + 0xc) == 0 || *ecx != 0 || *eax != 0)
        edx += 1
        ecx += 0x2d0
        eax += 0x3920
        
        if (edx s>= 0x40)
            return 0

return 1
