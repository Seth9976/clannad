// 函数: sub_4428c1
// 地址: 0x4428c1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t result = 0

if (*(arg1 + 0x3c) != 4)
    return 0x80004005

void* ecx_1 = *(arg1 + 0x38)

if (ecx_1 != 0)
    *(ecx_1 + 8) -= 1
    *(*(arg1 + 0x38) + 0xc) = 0

void* esi_3 = zx.d(*(arg1 + 0x42)) * 0xb4 + *(arg1 + 0xa4)
bool cond:0_1 = (*(arg1 + 0x118) & 8) == 0
*(arg1 + 0x3c) = 0

if (not(cond:0_1))
    if (*(esi_3 + 0x88) == 0)
        result = 0
    else
        int32_t* eax_1 = *(esi_3 + 0x88)
        result = (*(*eax_1 + 0x14))(eax_1)
    
    if (result s>= 0)
        if ((*(arg1 + 0x118) & 0x20) == 0)
        label_442967:
            
            if ((*(arg1 + 0x118) & 0x10) != 0)
                if (*(esi_3 + 0x98) == 0)
                    result = 0
                else
                    int32_t* eax_7 = *(esi_3 + 0x98)
                    result = (*(*eax_7 + 0x14))(eax_7)
                
                if (result s>= 0)
                    if (*(esi_3 + 0x94) == 0)
                        return 0
                    
                    int32_t* eax_9 = *(esi_3 + 0x94)
                    return (*(*eax_9 + 0x14))(eax_9)
        else
            if (*(esi_3 + 0x90) == 0)
                result = 0
            else
                int32_t* eax_3 = *(esi_3 + 0x90)
                result = (*(*eax_3 + 0x14))(eax_3)
            
            if (result s>= 0)
                if (*(esi_3 + 0x8c) == 0)
                    result = 0
                else
                    int32_t* eax_5 = *(esi_3 + 0x8c)
                    result = (*(*eax_5 + 0x14))(eax_5)
                
                if (result s>= 0)
                    goto label_442967

return result
