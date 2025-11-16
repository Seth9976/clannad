// 函数: sub_4448a4
// 地址: 0x4448a4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* edi_1 = arg4
int32_t eax

if (edi_1 != 0)
    eax = *(*(edi_1 + 8) + (arg3 << 2))
else
    eax = arg3

void* esi = *(arg1 + 0x18) + eax * 0x18

if (arg2 != *(esi + 4))
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    int32_t* eax_4 = *(esi + 4)
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)
        *(esi + 4) = 0
    
    *(esi + 4) = arg2
    
    if (edi_1 != 0)
        for (int32_t* i = *(edi_1 + 0x10); i != edi_1; i = i[4])
            void* ecx_2 = *i
            
            if (ecx_2 != 0)
                void* edi_2 = *(ecx_2 + 0x18) + *(i[2] + (arg3 << 2)) * 0x18
                int32_t* eax_8 = *(esi + 4)
                
                if (eax_8 != 0)
                    (*(*eax_8 + 4))(eax_8)
                
                int32_t* eax_9 = *(edi_2 + 4)
                
                if (eax_9 != 0)
                    (*(*eax_9 + 8))(eax_9)
                    *(edi_2 + 4) = 0
                
                *(edi_2 + 4) = *(esi + 4)
                edi_1 = arg4

return 0
