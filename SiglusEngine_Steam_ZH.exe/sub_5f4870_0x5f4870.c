// 函数: sub_5f4870
// 地址: 0x5f4870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0xc)

if (edi == 0)
    return 

int32_t* esi_1 = *(edi + 4)

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))()
        int32_t ebx_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi_1 + 8))()

j__free(edi)
