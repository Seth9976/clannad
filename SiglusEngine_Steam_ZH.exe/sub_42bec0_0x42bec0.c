// 函数: sub_42bec0
// 地址: 0x42bec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_228 = edi
sub_42b68f(arg1[0x9b], arg1[0xa6] | 0xc, &arg1[0x9e])
int32_t ecx_1 = 0
int32_t eax_2 = arg1[0x9e]
int32_t result
int32_t var_218_1

if (eax_2 == 0xa)
    var_218_1 = 0
label_42bf30:
    int32_t edx_1 = arg1[0x9c]
    wchar16* lpFileName = arg1[0xa0]
    void* var_238_1
    int32_t var_234_2
    char* var_230_1
    
    if (edx_1 != 0 || *(arg1[0x9b] + 0x18) != 0)
        void* i = arg1[0x9a]
        
        if (i != 0)
            do
                i = *(i + 0x6c)
                ecx_1 += 1
            while (i != 0)
            
            if (ecx_1 u< 0x20)
                goto label_42bf9f
            
            var_230_1 = "too many nested #includes"
            var_234_2 = 0x5e2
            var_238_1 = &arg1[0x9e]
            goto label_42bf8a
        
    label_42bf9f:
        
        if (edx_1 == 0)
            PSTR filePart
            uint8_t buffer[0x104]
            GetFullPathNameA(lpFileName, 0x104, &buffer, &filePart)
            wchar16* lpFileName_2 = lpFileName
            uint8_t (* eax_9)[0x104] = &buffer
            int32_t eax_12
            
            while (true)
                char ebx_1 = *lpFileName_2
                uint8_t temp2_1 = *eax_9
                bool c_1 = ebx_1 u< temp2_1
                
                if (ebx_1 == temp2_1)
                    if (ebx_1 == 0)
                        eax_12 = 0
                        break
                    
                    ebx_1 = *(lpFileName_2 + 1)
                    uint8_t temp5_1 = (*eax_9)[1]
                    c_1 = ebx_1 u< temp5_1
                    
                    if (ebx_1 == temp5_1)
                        lpFileName_2 = &lpFileName_2[1]
                        eax_9 = &(*eax_9)[2]
                        
                        if (ebx_1 != 0)
                            continue
                        
                        eax_12 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_12 = sbb.d(sbb.d(eax_9, eax_9, c_1), 0xffffffff, c_2)
                break
            
            if (eax_12 != 0)
                wchar16* lpFileName_1 = lpFileName
                int32_t var_234_4 = *(arg1[0x9a] + 0x60)
                void fileName
                sub_74aa1b(&fileName, 0x104, "%s%s")
                GetFullPathNameA(&fileName, 0x104, &buffer, &filePart)
            
            lpFileName = &buffer
        
        void* eax_14 = arg1[0x9a]
        int32_t var_21c_1
        
        if (eax_14 == 0 || *(eax_14 + 0x58) == 0)
            var_21c_1 = 0
        else
            var_21c_1 = *(eax_14 + 0x64)
        
        int32_t* eax_16 = sub_745f3f(0x70)
        int32_t* edi_2
        
        if (eax_16 == 0)
            edi_2 = nullptr
        else
            edi_2 = sub_42b95b(eax_16)
        
        if (edi_2 != 0)
            int32_t result_1 = sub_42ba0a(edi_2, lpFileName, 0, arg1, &arg1[0x9e], &arg1[6], 
                arg1[0x9c], var_218_1, var_21c_1)
            
            if (result_1 s>= 0)
                edi_2[0x1b] = arg1[0x9a]
                arg1[0x9a] = edi_2
                result = 0
            else
                arg1[0x12] = 1
                arg1[0x11] = 1
                sub_42b9e9(edi_2, 1)
                result = result_1
        else
            result = 0x8007000e
    else
        var_230_1 = "include interface required to support #include from resource or memory"
        var_234_2 = 0x5e1
        var_238_1 = &arg1[0x9e]
    label_42bf8a:
        sub_42aba3(&arg1[6], var_238_1, var_234_2, var_230_1)
        arg1[0x12] = 1
        arg1[0x11] = 1
        result = 0x80004005
else
    if (eax_2 == 0xb)
        var_218_1 = 1
        goto label_42bf30
    
    sub_42bdbd(arg1, "syntax error")
    result = 0x80004005
sub_745f2b(__security_cookie_1)
return result
