// 函数: sub_47e150
// 地址: 0x47e150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t edi
int32_t var_c = edi
void* j

for (int32_t i = 0; i u< 7; i += 1)
    j = *(arg1 + (i << 2))
    
    while (j != 0)
        *(arg2 + (edx << 2)) = j
        j = *(j + 0x20)
        edx += 1

return j
