// 函数: sub_6b3ac0
// 地址: 0x6b3ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4
int32_t* var_14 = arg1
int32_t var_10 = 0

if (ebx s>= 0)
    void* edi_1 = arg3
    
    if (ebx s> 0 || edi_1 != 0)
        int32_t var_1c = 0
        void* result = nullptr
        
        while (true)
            void* eax_1
            int32_t edx_1
            eax_1, edx_1 = std::basic_streambuf<char,struct std::char_traits<char> >::_Pnavail(arg1)
            void* esi_1 = eax_1
            var_10 = edx_1
            
            if (edx_1 s< 0 || (edx_1 s<= 0 && esi_1 == 0))
                if ((*(*var_14 + 0xc))(zx.d(*arg2)) == 0xffffffff)
                    break
                
                arg1 = var_14
                void* result_1 = result
                result += 1
                arg2 += 1
                var_1c = adc.d(var_1c, 0, result_1 u>= 0xffffffff)
                void* temp4_1 = edi_1
                edi_1 -= 1
                ebx = adc.d(ebx, 0xffffffff, temp4_1 u>= 1)
            else
                if (ebx s<= edx_1 && (ebx s< edx_1 || edi_1 u< esi_1))
                    esi_1 = edi_1
                    var_10 = ebx
                
                if (esi_1 != 0)
                    sub_748840(*var_14[8], arg2, esi_1)
                
                arg2 += esi_1
                void* result_2 = result
                result += esi_1
                var_1c = adc.d(var_1c, var_10, result_2 + esi_1 u< result_2)
                void* temp7_1 = edi_1
                edi_1 -= esi_1
                arg1 = var_14
                ebx = sbb.d(ebx, var_10, temp7_1 u< esi_1)
                void** eax_5 = arg1[0xc]
                *eax_5 -= esi_1
                void** eax_6 = arg1[8]
                *eax_6 += esi_1
            
            if (ebx s<= 0)
                if (ebx s< 0)
                    break
                
                if (edi_1 == 0)
                    break
        
        return result

return 0
