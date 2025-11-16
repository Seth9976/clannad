// 函数: sub_480838
// 地址: 0x480838
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_4c = edi
void*** edi_1 = nullptr

if (arg1[0x14] == 0)
    int32_t i = arg3
    void*** var_44
    
    if (arg3 u> 0)
        do
            void* eax_1 = arg1[0xd]
            i -= 1
            
            if (eax_1 == 0)
                sub_42aba3(*arg1, &arg1[4], 0, "internal error: stack underflow")
                arg1[0x13] = 1
                goto label_480d32
            
            (&var_44)[i] = *(eax_1 + 8)
            arg1[0xd] = *(eax_1 + 0xc)
            *(eax_1 + 8) = 0
            *(eax_1 + 0xc) = 0
        while (i u> 0)
    
    int32_t var_5c_5
    int32_t var_58_2
    char* var_54_3
    uint32_t var_54_6
    void*** var_54_7
    uint32_t var_40
    int32_t __saved_ebp
    uint32_t eax
    void*** eax_17
    
    switch (arg2)
        case 0, 6
            edi_1 = nullptr
        case 1, 2, 4, 5, 0xa, 0x17, 0x19, 0x1d, 0x23, 0x29, 0x2a, 0x2f, 0x30
            edi_1 = var_44
        case 3
            edi_1 = sub_46b5c3(var_40, var_44)
        case 7
            edi_1 = nullptr
            
            if (arg1[0x1d] == 0)
                arg1[0x1d] = var_44[6]
        case 8
            edi_1 = var_44
            sub_47ee7f(arg1, edi_1)
        case 9
            int32_t eax_4 = arg1[0xe]
            edi_1 = var_44
            
            if (eax_4 s< 6 || eax_4 s> 9)
                var_54_3 = "instruction coissue is not supported in this shader version"
                var_58_2 = 0x7eb
            label_480952:
                sub_42aba3(*arg1, &edi_1[4], var_58_2, var_54_3)
                arg1[0x13] = 1
            else
                edi_1[0x15] = 1
                sub_47ee7f(arg1, edi_1)
        case 0xb
            int32_t eax_5 = arg1[0xe]
            edi_1 = var_40
            
            if ((eax_5 s< 2 || eax_5 s> 5) && (eax_5 s< 0xb || eax_5 s> 0xe))
                var_54_3 = "instruction predication is not supported in this shader version"
                var_58_2 = 0x7ec
                goto label_480952
            
            edi_1[0x10] = var_44
        case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14
            edi_1 = var_44
            var_44 = nullptr
            
            if (arg3 u> 1)
                int32_t var_40_1 = 0
                edi_1[0xf] = var_40
            
            int32_t ecx_1 = 2
            
            if (arg3 u> 2)
                void* edx_2 = &edi_1[0x11]
                
                do
                    int32_t ebx_3 = (&__saved_ebp)[ecx_1 - 0x10]
                    (&__saved_ebp)[ecx_1 - 0x10] = 0
                    *edx_2 = ebx_3
                    ecx_1 += 1
                    edx_2 += 4
                while (ecx_1 u< arg3)
        case 0x15, 0x16
            edi_1 = var_44
            var_44 = nullptr
            int32_t ecx_2 = 1
            
            if (arg3 u> 1)
                void* edx_3 = &edi_1[0x11]
                
                do
                    int32_t ebx_4 = (&__saved_ebp)[ecx_2 - 0x10]
                    (&__saved_ebp)[ecx_2 - 0x10] = 0
                    *edx_3 = ebx_4
                    ecx_2 += 1
                    edx_3 += 4
                while (ecx_2 u< arg3)
        case 0x18
            edi_1 = var_44
            
            if (edi_1[7] == 0)
                edi_1[8] = sub_47ebff(arg1, var_40 + 0x10)
            else
                sub_42aba3(*arg1, &arg1[4], 0x7e6, "scalar registers cannot be masked")
                arg1[0x13] = 1
                edi_1[8] = 0xf0000
        case 0x1a
            edi_1 = var_44
            
            if (edi_1[5] == 0)
                edi_1[5] = 0xd000000
            else
                var_54_3 = "not cannot be used with other modifiers"
                var_58_2 = 0x7e2
            label_480ae1:
                sub_42aba3(*arg1, &arg1[4], var_58_2, var_54_3)
                arg1[0x13] = 1
        case 0x1b
            edi_1 = var_44
            eax = edi_1[5]
            
            if (eax == 0)
                edi_1[5] = &data_1000000
            else if (eax == &data_2000000)
                edi_1[5] = &data_3000000
            else if (eax == &data_4000000)
                edi_1[5] = "D"
            else if (eax == 0x7000000)
                edi_1[5] = 0x8000000
            else
                if (eax == 0x9000000 || eax == 0xa000000)
                    var_54_3 = "negate and divide modifiers cannot be combined"
                    var_58_2 = 0x7db
                    goto label_480ae1
                
                if (eax == 0xb000000)
                    edi_1[5] = 0xc000000
        case 0x1c
            edi_1 = var_40
            
            if (var_44[6] != 1)
                var_54_3 = "invalid complement expression"
                var_58_2 = 0x7da
                goto label_480ae1
            
            eax = arg1[0xe]
            
            if (eax s< 6 || eax s> 9)
                var_54_3 = "complement is not supported in this shader version"
                var_58_2 = 0x7ed
                goto label_480ae1
            
            if (edi_1[5] != 0)
                var_54_3 = "complement cannot be used with other modifiers"
                var_58_2 = 0x7dc
                goto label_480ae1
            
            edi_1[5] = 0x6000000
        case 0x1e
            edi_1 = var_44
            
            if (edi_1[7] == 0)
                edi_1[9] = sub_47ecb4(arg1, var_40 + 0x10)
            else
                sub_42aba3(*arg1, &arg1[4], 0x7e6, "scalar registers cannot be swizzled")
                arg1[0x13] = 1
                edi_1[9] = 0xe40000
        case 0x21
            var_54_6 = 0
        label_480b63:
            edi_1 = sub_480296(arg1, &var_44[4], var_54_6)
            sub_47e2d4(arg1, edi_1)
        case 0x22
            var_54_6 = var_40
            goto label_480b63
        case 0x24
            edi_1 = var_44
            edi_1[6] += *(var_40 + 0x18)
            
            if (edi_1[0xa] == 0)
                edi_1[0xa] = *(var_40 + 0x28)
                *(var_40 + 0x28) = 0
            else if (*(var_40 + 0x28) != 0)
                var_54_3 =
                    "only one address register reference allowed in a relative address expression"
                var_58_2 = 0x7d9
                goto label_480ae1
        case 0x25
            eax_17 = sub_42cfa1(0x2c)
            edi_1 = nullptr
            
            if (eax_17 == 0)
                sub_47e2d4(arg1, edi_1)
            else
                var_54_7 = var_44
                int32_t var_58_4 = 0
                var_5c_5 = 0
            label_480bc5:
                edi_1 = sub_4c6f48(eax_17, 0, 0, var_5c_5, 0, var_54_7)
                sub_47e2d4(arg1, edi_1)
        case 0x26
            eax_17 = sub_42cfa1(0x2c)
            edi_1 = nullptr
            
            if (eax_17 != 0)
                var_54_7 = nullptr
                int32_t var_58_5 = 0
                var_5c_5 = var_44[6]
                goto label_480bc5
            
            sub_47e2d4(arg1, edi_1)
        case 0x27
            void*** eax_18 = sub_42cfa1(0x30)
            
            if (eax_18 == 0)
                edi_1 = nullptr
            else
                edi_1 = sub_46b809(eax_18, &arg1[4])
            
            sub_47e2d4(arg1, edi_1)
            edi_1[4] = 2
            edi_1[6] = 1
        case 0x28
            void*** eax_20 = sub_42cfa1(0x30)
            
            if (eax_20 == 0)
                edi_1 = nullptr
            else
                edi_1 = sub_46b809(eax_20, &arg1[4])
            
            sub_47e2d4(arg1, edi_1)
            edi_1[6] = 0
            edi_1[4] = 2
        case 0x2b
            edi_1 = var_44
            edi_1[6] = neg.d(edi_1[6])
        case 0x2c, 0x2d
            edi_1 = var_44
            long double x87_r7_1 = float.t(edi_1[6])
            bool cond:5_1 = edi_1[6] s>= 0
            edi_1[4] = 5
            
            if (not(cond:5_1))
                x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
            
            *(edi_1 + 0x18) = fconvert.d(x87_r7_1)
        case 0x2e
            edi_1 = var_44
            long double x87_r7_2 = float.t(edi_1[6])
            bool cond:6_1 = edi_1[6] s>= 0
            edi_1[4] = 5
            
            if (not(cond:6_1))
                x87_r7_2 = x87_r7_2 + fconvert.t(4294967296.0)
            
            *(edi_1 + 0x18) = fconvert.d(fneg(x87_r7_2))
        case 0x31
            edi_1 = var_44
            *(edi_1 + 0x18) = fconvert.d(fneg(fconvert.t(*(edi_1 + 0x18))))
        case 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c
            void*** eax_22 = sub_42cfa1(0x60)
            
            if (eax_22 == 0)
                edi_1 = nullptr
                sub_47e2d4(arg1, edi_1)
            else
                edi_1 = sub_4c6ec1(eax_22, &arg1[4], arg1[0x10], arg1[0x11], arg1[0x12])
                sub_47e2d4(arg1, edi_1)
        case 0x3d, 0x3e, 0x3f
            void*** eax_23 = sub_42cfa1(0x30)
            
            if (eax_23 == 0)
                edi_1 = nullptr
                sub_47e2d4(arg1, edi_1)
            else
                edi_1 = sub_46b809(eax_23, &arg1[4])
                sub_47e2d4(arg1, edi_1)
    
    if (arg1[0x14] == 0)
        void*** eax_24 = sub_42cfa1(0x14)
        
        if (eax_24 == 0)
            eax = 0
        else
            eax = sub_46b602(eax_24, edi_1, arg1[0xd], "Stack")
        
        if (eax != 0)
            arg1[0xd] = eax
        else
            sub_42aba3(*arg1, &arg1[4], eax, "internal error: out of memory")
            arg1[0x14] = 1
            arg1[0x13] = 1

label_480d32:
