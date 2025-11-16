// 函数: sub_48421f
// 地址: 0x48421f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* edi_1 = arg1
char* eax = *(edi_1 + 4)

if (eax != 0)
    char* esi_1 = arg2
    int32_t eax_3
    
    while (true)
        char edx = *eax
        arg1.b = edx
        char temp1_1 = *esi_1
        bool c_1 = edx u< temp1_1
        
        if (edx == temp1_1)
            if (arg1.b == 0)
                eax_3 = 0
                break
            
            edx = eax[1]
            arg1.b = edx
            char temp4_1 = esi_1[1]
            c_1 = edx u< temp4_1
            
            if (edx == temp4_1)
                eax = &eax[2]
                esi_1 = &esi_1[2]
                
                if (arg1.b != 0)
                    continue
                
                eax_3 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_3 = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2)
        break
    
    if (eax_3 == 0)
        return edi_1 - 4

int32_t i = 0

if (*(edi_1 + 0x24) u> 0)
    do
        void* result = (*(**(*(edi_1 + 0x30) + (i << 2)) + 0x20))(arg2)
        
        if (result != 0)
            return result
        
        i += 1
    while (i u< *(edi_1 + 0x24))

return nullptr
