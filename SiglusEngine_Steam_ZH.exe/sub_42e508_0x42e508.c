// 函数: sub_42e508
// 地址: 0x42e508
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_50 = edi
void*** edi_1 = nullptr

if (arg1[0x11] != 0)
    return 

int32_t ecx = arg3

while (true)
    char const* const var_54_1
    void*** var_44
    
    if (ecx u> 0)
        void* eax_1 = arg1[0x17]
        ecx -= 1
        
        if (eax_1 == 0)
            var_54_1 = "internal error: stack underflow"
        else
            (&var_44)[ecx] = *(eax_1 + 8)
            arg1[0x17] = *(eax_1 + 0xc)
            *(eax_1 + 8) = 0
            *(eax_1 + 0xc) = arg1[0x18]
            arg1[0x18] = eax_1
            continue
    else
        void* var_40
        void*** eax
        int32_t eax_22
        int32_t eax_24
        bool c_3
        
        switch (arg2)
            case nullptr
                sub_42e02a(arg1, var_44[6], 1)
            case 1
                sub_42d0b4(arg1, var_44[6])
            case 2
                sub_42be87(arg1, var_44[6], 0)
            case 3
                sub_42be87(arg1, var_44[6], *(var_40 + 0x18))
            case 4
                sub_42bec0(arg1)
            case 5
                sub_42c0fc(arg1)
            case 6
                sub_42c1ff(arg1, var_44[6])
            case 7
                sub_42c1ff(arg1, sub_42cf1a(arg1, var_44[6], nullptr, nullptr))
            case 8
                int32_t eax_10 = sub_42cf1a(arg1, var_44[6], nullptr, nullptr)
                int32_t eax_11 = neg.d(eax_10)
                sub_42c1ff(arg1, sbb.d(eax_11, eax_11, eax_10 != 0) + 1)
            case 9
                sub_42c25f(arg1, var_44[6])
            case 0xa
                sub_42c2dc(arg1)
            case 0xb
                sub_42c346(arg1)
            case 0xc
                sub_42c1ff(arg1, 1)
                sub_42a6ee(arg1[0x9b])
            case 0xd
                sub_42c25f(arg1, 1)
                sub_42a6ee(arg1[0x9b])
            case 0xe
                sub_42d128(arg1)
            case 0xf, 0x10, 0x13, 0x16, 0x17, 0x1a, 0x1d, 0x22, 0x25, 0x27, 0x29, 0x2b
                edi_1 = var_44
            case 0x11
                edi_1 = var_44
                int32_t var_54_6 = edi_1[6]
                edi_1[4] = 2
                edi_1[6] = sub_42d286(arg1)
            case 0x12
                edi_1 = var_44
                char* var_5c_3 = edi_1[6]
                edi_1[4] = 2
                edi_1[6] = sub_42cf1a(arg1, var_5c_3, nullptr, nullptr)
                arg1[0x16] = 1
            case 0x14
                edi_1 = var_44
                eax.b = edi_1[6] == 0
                edi_1[6] = eax
            case 0x15
                edi_1 = var_44
                edi_1[6] = neg.d(edi_1[6])
            case 0x18
                edi_1 = var_44
                edi_1[6] *= *(var_40 + 0x18)
            case 0x19
                int32_t ecx_18 = *(var_40 + 0x18)
                edi_1 = var_44
                
                if (ecx_18 == 0)
                    sub_42aba3(&arg1[6], &arg1[0x9e], 0x5df, 
                        "division by zero in preprocessor expression")
                    arg1[0x11] = 1
                else
                    edi_1[6] = divu.dp.d(0:(edi_1[6]), ecx_18)
            case 0x1b
                edi_1 = var_44
                edi_1[6] += *(var_40 + 0x18)
            case 0x1c
                edi_1 = var_44
                edi_1[6] -= *(var_40 + 0x18)
            case 0x1e
                edi_1 = var_44
                eax_22 = edi_1[6]
                edi_1[6] = neg.d(sbb.d(eax_22, eax_22, eax_22 u< *(var_40 + 0x18)))
            case 0x1f
                edi_1 = var_44
                eax_22 = edi_1[6]
                edi_1[6] = neg.d(sbb.d(eax_22, eax_22, *(var_40 + 0x18) u< eax_22))
            case 0x20
                edi_1 = var_44
                eax_24 = edi_1[6]
                c_3 = *(var_40 + 0x18) u< eax_24
            label_42e75b:
                edi_1[6] = sbb.d(eax_24, eax_24, c_3) + 1
            case 0x21
                edi_1 = var_44
                eax_24 = edi_1[6]
                c_3 = eax_24 u< *(var_40 + 0x18)
                goto label_42e75b
            case 0x23
                edi_1 = var_44
                int32_t eax_26 = edi_1[6] - *(var_40 + 0x18)
                int32_t eax_27 = neg.d(eax_26)
                edi_1[6] = sbb.d(eax_27, eax_27, eax_26 != 0) + 1
            case 0x24
                edi_1 = var_44
                int32_t ecx_24
                ecx_24.b = edi_1[6] != *(var_40 + 0x18)
                edi_1[6] = ecx_24
            case 0x26
                edi_1 = var_44
                
                if (edi_1[6] == 0 || *(var_40 + 0x18) == 0)
                    edi_1[6] = nullptr
                else
                    edi_1[6] = 1
            case 0x28
                edi_1 = var_44
                
                if (edi_1[6] != 0 || *(var_40 + 0x18) != 0)
                    edi_1[6] = 1
                else
                    edi_1[6] = nullptr
            case 0x2a
                edi_1 = var_44
                void* eax_30 = var_40
                void* var_3c
                
                if (edi_1[6] == 0)
                    eax_30 = var_3c
                edi_1[6] = *(eax_30 + 0x18)
            case 0x2c, 0x2d, 0x2e
                void*** eax_31 = sub_42cfa1(0x30)
                
                if (eax_31 == 0)
                    edi_1 = nullptr
                else
                    edi_1 = sub_46b809(eax_31, &arg1[0x9e])
                
                sub_42d021(arg1, edi_1)
        
        if (arg1[0x11] != 0)
            break
        
        eax = arg1[0x18]
        
        if (eax != 0)
            arg1[0x18] = eax[3]
            eax[2] = edi_1
            eax[3] = arg1[0x17]
            arg1[0x17] = eax
            break
        
        void*** eax_33 = sub_42cfa1(0x14)
        
        if (eax_33 == 0)
            eax = nullptr
        else
            eax = sub_46b602(eax_33, edi_1, arg1[0x17], "Stack")
        
        if (eax != 0)
            arg1[0x17] = eax
            break
        
        var_54_1 = "internal error: out of memory"
    sub_42aba3(&arg1[6], &arg1[0x9e], 0, var_54_1)
    arg1[0x11] = 1
    break
