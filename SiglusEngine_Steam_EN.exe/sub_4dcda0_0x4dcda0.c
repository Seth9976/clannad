// 函数: sub_4dcda0
// 地址: 0x4dcda0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx

if (arg1 == 0)
    ebx = nullptr
else
    ebx = arg1 - 0x38

if (*(ebx + 0x3c) != arg2)
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    int32_t* eax_2 = *(ebx + 0x3c)
    *(ebx + 0x3c) = arg2
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)

int32_t* edx = *(arg1 + 4)
int32_t result = 0

if (edx != 0)
    result = (**edx)(edx, 0x61d50c, arg1 + 0xa4)

if (arg2 == 0)
    int32_t* ecx_3 = *(arg1 + 0xa4)
    
    if (ecx_3 != 0)
        *(arg1 + 0xa4) = 0
        (*(*ecx_3 + 8))(ecx_3)

return result
