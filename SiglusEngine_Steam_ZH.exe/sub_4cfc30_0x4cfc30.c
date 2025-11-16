// 函数: sub_4cfc30
// 地址: 0x4cfc30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t edi_1 = *(*(arg1 + 0x18) + (arg3 << 2))
int32_t esi = arg3

if (arg3 u< arg2)
    do
        int32_t* eax_2 = *(arg1 + 0x18) + (esi << 2)
        esi += 1
        *eax_2 = eax_2[1]
    while (esi u< arg2)
else if (arg3 u> arg2)
    do
        int32_t* eax_4 = *(arg1 + 0x18) + (esi << 2)
        esi -= 1
        *eax_4 = eax_4[-1]
    while (esi u> arg2)

*(*(arg1 + 0x18) + (arg2 << 2)) = edi_1
return 0
