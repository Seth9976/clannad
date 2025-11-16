// 函数: sub_5e3ee0
// 地址: 0x5e3ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax

if (*(arg1 + 0xb4) u< 8)
    eax = arg1 + 0xa0
else
    eax = *(arg1 + 0xa0)

int32_t var_1c = *(arg1 + 0xb0)
int32_t* result = sub_536340(arg2, arg1, arg2[4], eax)

if (result == 0)
    return result

sub_6efe60(arg1 + 0x7a0)
*(arg1 + 0x8c0) = 0
*(arg1 + 0x8c4) = 0
*(arg1 + 0x8c8) = 0
*(arg1 + 0x8cc) = 0
sub_6efdb0(arg1 + 0x7a0)
*(arg1 + 0x790) = 0
int32_t* esi_2 = *(arg1 + 0x794)
*(arg1 + 0x794) = 0

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

if (arg1 + 0xa0 != arg2)
    sub_52e3c0(arg1 + 0xa0, arg2, 0, 0xffffffff)

return sub_5e3fd0(arg1)
