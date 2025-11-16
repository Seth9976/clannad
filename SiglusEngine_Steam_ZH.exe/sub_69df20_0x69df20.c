// 函数: sub_69df20
// 地址: 0x69df20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void** ebx = arg2
int32_t result = arg1
int32_t result_1 = result
void** edi = ebx

if (*(ebx + 0xd) == 0)
    do
        sub_69df20(edi[2])
        int32_t* esi_1 = ebx[0xa]
        edi = *edi
        
        if (esi_1 != 0)
            bool cond:1_1 = esi_1[1] != 1
            esi_1[1]
            esi_1[1] -= 1
            
            if (not(cond:1_1))
                (*(*esi_1 + 4))()
                bool cond:2_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:2_1))
                    (*(*esi_1 + 8))()
        
        j__free(ebx)
        result = result_1
        ebx = edi
    while (*(edi + 0xd) == 0)

return result
