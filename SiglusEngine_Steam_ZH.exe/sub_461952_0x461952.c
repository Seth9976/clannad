// 函数: sub_461952
// 地址: 0x461952
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** esi = arg1

if (*(esi + 0x5d) != 0)
    return 0x88760384

int32_t edi
int32_t var_c_1 = edi
void**** edi_1 = arg7
int32_t result

if (edi_1 == 0)
    result = 0x88760385
else
    result = sub_4613e7(esi, arg2, &arg7)
    
    if (result s>= 0)
        void* eax = arg4
        
        if (eax == 0)
            eax = &data_aac190
        
        result = sub_484673(arg7, esi, arg3, eax, arg5, arg6, &arg1)
        
        if (result s>= 0)
            void*** eax_1 = arg1
            int32_t ecx_3 = neg.d(eax_1)
            arg7 = sbb.d(ecx_3, ecx_3, eax_1 != 0) & &eax_1[1]
            bool cond:0_1 = sub_48647e(&esi[7], &arg7) == 0
            void*** eax_4 = arg1
            void** ecx_7 = *eax_4
            
            if (cond:0_1)
                ecx_7[2](eax_4)
                result = 0x8007000e
            else
                ecx_7[1](eax_4)
                *edi_1 = arg1
                result = 0

return result
