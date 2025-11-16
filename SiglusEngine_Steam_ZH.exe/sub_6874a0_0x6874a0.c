// 函数: sub_6874a0
// 地址: 0x6874a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]
int128_t* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_10_2 = ecx
        sub_687600(arg1)
    
    int128_t* ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        *ecx_6 = *arg2
        ecx_6[1].q = arg2[1].q
        *(ecx_6 + 0x18) = *(arg2 + 0x18)
else
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_687600(arg1)
    
    eax = *arg1 + (arg2 - eax) s/ 0x1c * 0x1c
    int128_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *eax
        ecx_4[1].q = eax[1].q
        *(ecx_4 + 0x18) = *(eax + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
