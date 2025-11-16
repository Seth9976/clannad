// 函数: sub_4d3a98
// 地址: 0x4d3a98
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* eax = *(arg1 + 0x100)
int32_t edi
int32_t var_14 = edi
int32_t i = 0

if (*(eax + 4) u> 0)
    int32_t* ecx = *(eax + 8)
    
    do
        if ((*(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*ecx << 2)) + 4) << 2)) + 5) & 2) != 0)
            return 1
        
        i += 1
        ecx = &ecx[1]
    while (i u< *(*(arg1 + 0x100) + 4))

*(arg1 + 0x15c) = 0
int32_t result = sub_4d3501(arg1, 0x100000, 0, *(eax + 8), 0x100000, nullptr, 0)

if (result s< 0)
    return result

return sub_4cbb34(arg1)
