// 函数: sub_43d3fc
// 地址: 0x43d3fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi

if (arg2 == 0)
    return 

if (arg2[6] * arg2[5] != 1)
    sub_43713d(arg1, &arg2[0xc], 0xbcb, "float expected")
else if (sub_43772a(arg1, arg2[4]) == 0)
    sub_43713d(arg1, &arg2[0xc], 0xbcb, "float expected")
else if (sub_4380be(arg2) == 0)
label_43d48b:
    void*** eax_9 = sub_42cfa1(0x24)
    void*** esi_1
    
    if (eax_9 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_46be22(eax_9)
    
    if (esi_1 != 0)
        esi_1[4] = 2
        int32_t eax_12 = (*(*arg2 + 4))()
        esi_1[6] = eax_12
        
        if (eax_12 != 0)
            if (arg3 == 0)
            label_43d4d0:
                
                if (arg4 == 0)
                label_43d4e2:
                    void*** eax_17 = sub_42cfa1(0x14)
                    
                    if (eax_17 != 0)
                        sub_46b602(eax_17, esi_1, 0, "Stmts")
                else
                    int32_t eax_16 = (*(*arg4 + 4))()
                    esi_1[8] = eax_16
                    
                    if (eax_16 != 0)
                        goto label_43d4e2
            else
                int32_t eax_14 = (*(*arg3 + 4))()
                esi_1[7] = eax_14
                
                if (eax_14 != 0)
                    goto label_43d4d0
else
    void var_1c
    
    if (sub_43cb9f(arg1, arg2, &var_1c) s< 0)
        goto label_43d48b
    
    void* var_28_4 = &arg2[0xc]
    double var_c
    int32_t eax_7
    int80_t st0_1
    st0_1, eax_7 = sub_437fe4(&var_c, &var_1c)
    
    if (eax_7 s< 0)
        goto label_43d48b
    
    fconvert.t(0.0) - fconvert.t(var_c)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t* eax_8 = arg3
    
    if (not(p_1))
        eax_8 = arg4
    
    sub_46b5aa(eax_8)
