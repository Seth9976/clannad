// 函数: sub_71d840
// 地址: 0x71d840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
uint32_t eax = zx.d(arg1[3].w)

if (eax == 1 || eax == 2)
    uint32_t ecx = zx.d(*(arg1 + 0xe))
    
    if (ecx == 8 || ecx == 0x10)
        int32_t ecx_1 = arg1[0x11]
        int32_t var_c_1 = ecx_1
        uint32_t ebx_2 = eax * ecx_1 * arg3
        
        if (ebx_2 != 0)
            uint32_t edi_4
            uint32_t temp3_1
            
            do
                int32_t edi_1 = arg1[2]
                
                if (edi_1 u>= arg1[0xa])
                    break
                
                if (arg1[5] != 0xffffffff)
                    if (sub_71d710(arg1, divu.dp.d(0:edi_1, arg1[0xb])) == 0)
                        break
                    
                    int32_t edx_7 = modu.dp.d(0:(arg1[2]), arg1[0xb]) * arg1[0x11]
                    edi_4 = arg1[0x16] * arg1[0x11] - edx_7
                    
                    if (edi_4 u> ebx_2)
                        edi_4 = ebx_2
                    
                    sub_748840(arg2, arg1[0x12] + edx_7, edi_4)
                else
                    int32_t edi_2 = edi_1 * ecx_1
                    sub_749feb(*arg1, arg1[1] + 0x2c + edi_2, nullptr, FILE_BEGIN)
                    uint32_t ecx_4 = arg1[0x11] * arg1[0xa] - edi_2
                    
                    if (ecx_4 s<= 0)
                        break
                    
                    uint32_t eax_5 = ebx_2
                    
                    if (ebx_2 u> ecx_4)
                        eax_5 = ecx_4
                    
                    uint32_t eax_6 = _fread(arg2, 1, eax_5, *arg1)
                    
                    if (eax_6 == 0)
                        break
                    
                    edi_4 = divu.dp.d(0:eax_6, var_c_1) * var_c_1
                
                if (edi_4 == 0)
                    break
                
                ecx_1 = arg1[0x11]
                arg2 += edi_4
                var_c_1 = ecx_1
                arg1[2] += divu.dp.d(0:edi_4, ecx_1)
                temp3_1 = ebx_2
                ebx_2 -= edi_4
            while (temp3_1 != edi_4)
        
        return arg3 - divu.dp.d(0:(divu.dp.d(0:ebx_2, zx.d(arg1[3].w))), arg1[0x11])

return 0
