// 函数: sub_5e2290
// 地址: 0x5e2290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
sub_6efe60(arg1 + 0x7a0)
*(arg1 + 0x8c0) = 0
*(arg1 + 0x8c4) = 0
*(arg1 + 0x8c8) = 0
*(arg1 + 0x8cc) = 0
sub_6efdb0(arg1 + 0x7a0)
sub_6efe60(arg1 + 0x8d0)
*(arg1 + 0x9f0) = 0
*(arg1 + 0x9f4) = 0
*(arg1 + 0x9f8) = 0
*(arg1 + 0x9fc) = 0
sub_6efdb0(arg1 + 0x8d0)
*(arg1 + 0x790) = 0
int32_t* esi_2 = *(arg1 + 0x794)
*(arg1 + 0x794) = 0

if (esi_2 != 0)
    bool cond:0_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_2 + 4))()
        bool cond:3_1 = esi_2[2] != 1
        esi_2[2]
        esi_2[2] -= 1
        
        if (not(cond:3_1))
            (*(*esi_2 + 8))()

*(arg1 + 0x798) = 0
int32_t* esi_3 = *(arg1 + 0x79c)
*(arg1 + 0x79c) = 0

if (esi_3 != 0)
    bool cond:2_1 = esi_3[1] != 1
    esi_3[1]
    esi_3[1] -= 1
    
    if (not(cond:2_1))
        (*(*esi_3 + 4))()
        int32_t ebx_1 = esi_3[2]
        esi_3[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi_3 + 8))()

void* eax_9 = arg1 + 0xa0
*(arg1 + 0x9c) = 0
bool cond:1 = *(eax_9 + 0x14) u< 8
*(eax_9 + 0x10) = 0

if (not(cond:1))
    eax_9 = *eax_9

*eax_9 = 0
sub_5b4ff0(arg1 + 0x25c, 0)
sub_5b4ff0(arg1 + 0x418, 0)
sub_5b4ff0(arg1 + 0x5d4, 0)
sub_5dab00(arg1 + 0x100)
*(arg1 + 0x100) = 0xffffffff
*(arg1 + 0x104) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x114) = 0
*(arg1 + 0x118) = 0
return sub_5daca0(arg1 + 0x100)
