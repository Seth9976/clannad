// 函数: sub_52c490
// 地址: 0x52c490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84

if (eax == 0)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
    return sub_57d620(data_1b8a720, data_1b8a734)

if (eax == 1)
    sub_4ef190(eax - 1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    return sub_57d620(data_1b8a720, 0xffffffff)

void* result = eax - 2

if (eax != 2)
    return result

int32_t edi = 0
void* i = &data_8fcaec
void* esi = &data_1090b18

do
    if (edi u<= 0x3f)
        result = *(esi - 4)
        int32_t ecx = *esi
        *(i - 4) = result
        *i = ecx
    
    i += 0x2d0
    edi += 1
    esi += 0x1d4
while (i s< &data_907eec)

return result
