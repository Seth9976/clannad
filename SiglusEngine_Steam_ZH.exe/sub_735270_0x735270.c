// 函数: sub_735270
// 地址: 0x735270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x30)
*(arg1 + 0x1b8) = eax_2
*eax_2 = sub_734e00
eax_2[2].b = 0
int32_t ecx_1 = *(arg1 + 0x64) * *(arg1 + 0x5c)
eax_2[0xa] = ecx_1

if (*(arg1 + 0x11c) != 2)
    eax_2[1] = sub_734ec0
    eax_2[3] = sub_734f00
    eax_2[8] = 0
    return sub_734d30(arg1) __tailcall

eax_2[1] = sub_734e20
eax_2[3] = sub_735060
eax_2[8] = (*(*(arg1 + 4) + 4))(arg1, 1, ecx_1)
return sub_734d30(arg1) __tailcall
