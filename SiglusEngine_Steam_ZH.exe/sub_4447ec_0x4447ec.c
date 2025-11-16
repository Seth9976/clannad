// 函数: sub_4447ec
// 地址: 0x4447ec
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax_1

if (arg4 != 0)
    eax_1 = *(*(arg4 + 8) + (arg3 << 2))
else
    eax_1 = arg3

void* esi = *(arg1 + 0x18) + eax_1 * 0x18

if (arg2 != *(esi + 4))
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    int32_t* eax_5 = *(esi + 4)
    
    if (eax_5 != 0)
        (*(*eax_5 + 8))(eax_5)
        *(esi + 4) = 0
    
    *(esi + 0x14) |= 1
    *(esi + 4) = arg2
    *(arg1 + 0x118) |= 0x40
    
    if (arg4 != 0)
        for (int32_t* i = *(arg4 + 0x10); i != arg4; i = i[4])
            void* ecx_3 = *i
            
            if (ecx_3 != 0)
                void* edi_2 = *(ecx_3 + 0x18) + *(i[2] + (arg3 << 2)) * 0x18
                int32_t* eax_10 = *(esi + 4)
                
                if (eax_10 != 0)
                    (*(*eax_10 + 4))(eax_10)
                
                int32_t* eax_11 = *(edi_2 + 4)
                
                if (eax_11 != 0)
                    (*(*eax_11 + 8))(eax_11)
                    *(edi_2 + 4) = 0
                
                int32_t eax_12 = *(esi + 4)
                *(edi_2 + 0x14) |= 1
                *(edi_2 + 4) = eax_12

return 0
