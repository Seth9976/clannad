// 函数: sub_496f10
// 地址: 0x496f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t edx_1 = (**(arg1 + 4))(arg1, 1, 0x580) + 0x100
char* i = nullptr
*(arg1 + 0x148) = edx_1
__builtin_memset(edx_1 - 0x100, 0, 0x100)

do
    i[edx_1] = i.b
    i = &i[1]
while (i s<= 0xff)

int32_t esi_1 = *(arg1 + 0x148)
__builtin_memset(edx_1 + 0x100, 0xffffffff, 0x180)
__builtin_memset(edx_1 + 0x280, 0, 0x180)
__builtin_memcpy(edx_1 + 0x400, esi_1, 0x80)
return 0
