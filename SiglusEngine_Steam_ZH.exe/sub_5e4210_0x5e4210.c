// 函数: sub_5e4210
// 地址: 0x5e4210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax

if (*(arg1 + 0xcc) u< 8)
    eax = arg1 + 0xb8
else
    eax = *(arg1 + 0xb8)

int32_t var_1c = *(arg1 + 0xc8)
int32_t* result = sub_536340(arg2, arg1, arg2[4], eax)

if (result == 0)
    return result

sub_6efe60(arg1 + 0x8d0)
*(arg1 + 0x9f0) = 0
*(arg1 + 0x9f4) = 0
*(arg1 + 0x9f8) = 0
*(arg1 + 0x9fc) = 0
sub_6efdb0(arg1 + 0x8d0)
*(arg1 + 0x798) = 0
int32_t* esi_2 = *(arg1 + 0x79c)
*(arg1 + 0x79c) = 0

if (esi_2 != 0)
    bool cond:1_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_2 + 4))()
        bool cond:2_1 = esi_2[2] != 1
        esi_2[2]
        esi_2[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi_2 + 8))()

if (arg1 + 0xb8 != arg2)
    sub_52e3c0(arg1 + 0xb8, arg2, 0, 0xffffffff)

return sub_5e4300(arg1)
