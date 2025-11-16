// 函数: sub_5df3d0
// 地址: 0x5df3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx

if (arg1[5] u< 8)
    edx = arg1
else
    edx = *arg1

uint32_t eax_1 = edx + (arg1[4] << 1)
int32_t* edx_1

if (arg1[5] u< 8)
    edx_1 = arg1
else
    edx_1 = *arg1

if (eax_1 != 0)
    return sub_5df330(arg1, (eax_1 - edx_1) s>> 1, 1, arg2)

return sub_5df330(arg1, eax_1, 1, arg2)
