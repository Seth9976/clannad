// 函数: sub_680310
// 地址: 0x680310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
void* edx = arg2 - arg3
void* i

for (i = edx & 0xfffffffc; i s> 4; i = edx & 0xfffffffc)
    var_8 = *(arg3 + edx - 4)
    *(arg3 + edx - 4) = *arg3
    int32_t eax_4 = (edx - 4) s>> 2
    sub_6805c0(eax_4, nullptr, arg3, eax_4, &var_8, arg4)
    edx -= 4

return i
