// 函数: sub_46b727
// 地址: 0x46b727
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg3

if (edx != *arg1)
    return 0

int32_t eax_5
bool c_1
bool cond:1_1

if (edx s> 8)
    if (edx == 9)
        char* esi_5 = arg1[2]
        char* ecx_3 = arg3[2]
        
        do
            int32_t edx_1
            edx_1.b = *ecx_3
            arg1.b = edx_1.b
            char temp2_1 = *esi_5
            c_1 = edx_1.b u< temp2_1
            
            if (edx_1.b != temp2_1)
                goto label_46b7eb
            
            if (arg1.b == 0)
                break
            
            edx_1.b = ecx_3[1]
            arg1.b = edx_1.b
            char temp6_1 = esi_5[1]
            c_1 = edx_1.b u< temp6_1
            
            if (edx_1.b != temp6_1)
                goto label_46b7eb
            
            ecx_3 = &ecx_3[2]
            esi_5 = &esi_5[2]
        while (arg1.b != 0)
        
    label_46b77f:
        eax_5 = 0
    label_46b7f0:
        cond:1_1 = eax_5 == 0
        goto label_46b751
    
    if (edx == 0xa)
        char* esi_3 = arg1[2]
        char* ecx_1 = arg3[2]
        
        do
            char edx_2 = *ecx_1
            arg1.b = edx_2
            char temp5_1 = *esi_3
            c_1 = edx_2 u< temp5_1
            
            if (edx_2 != temp5_1)
                goto label_46b7eb
            
            if (arg1.b == 0)
                break
            
            edx_2 = ecx_1[1]
            arg1.b = edx_2
            char temp8_1 = esi_3[1]
            c_1 = edx_2 u< temp8_1
            
            if (edx_2 != temp8_1)
                goto label_46b7eb
            
            ecx_1 = &ecx_1[2]
            esi_3 = &esi_3[2]
        while (arg1.b != 0)
        
        goto label_46b77f
else if (edx s>= 5)
    long double x87_r7_1 = fconvert.t(*(arg1 + 8))
    long double x87_r6_1 = fconvert.t(*(arg3 + 8))
    x87_r6_1 - x87_r7_1
    arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        return 0
else if (edx == 0)
label_46b74e:
    cond:1_1 = arg3[2] == arg1[2]
label_46b751:
    
    if (not(cond:1_1))
        return 0
else
    if (edx == 1)
        void* esi_1 = &arg1[2]
        arg1 = &arg3[2]
        
        while (true)
            edx.b = *arg1
            arg3.b = edx.b
            char temp7_1 = *esi_1
            c_1 = edx.b u< temp7_1
            
            if (edx.b == temp7_1)
                if (arg3.b == 0)
                    break
                
                edx.b = *(arg1 + 1)
                arg3.b = edx.b
                char temp9_1 = *(esi_1 + 1)
                c_1 = edx.b u< temp9_1
                
                if (edx.b == temp9_1)
                    arg1 += 2
                    esi_1 += 2
                    
                    if (arg3.b == 0)
                        break
                    
                    continue
            
        label_46b7eb:
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_5 = sbb.d(sbb.d(arg1, arg1, c_1), 0xffffffff, c_2)
            goto label_46b7f0
        
        goto label_46b77f
    
    if (edx s> 1 && edx s<= 4)
        goto label_46b74e
return 1
