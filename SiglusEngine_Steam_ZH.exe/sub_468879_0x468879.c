// 函数: sub_468879
// 地址: 0x468879
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
long double x87_r7 = fconvert.t(esi[0x4c])
long double x87_r6 = fconvert.t(0.0)
x87_r6 - x87_r7
char* result
result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (p)
    int32_t edi
    int32_t var_34_1 = edi
    int32_t mxcsr
    int16_t x87control
    
    if (*(esi + 0x117) u> 8)
        uint32_t eax_1
        
        if ((*(esi + 0x116) & 2) == 0)
            eax_1 = zx.d(*(esi + 0x153))
        else
            eax_1 = zx.d(esi[0x54].b)
            uint32_t edx_2 = zx.d(*(esi + 0x151))
            
            if (edx_2 s> eax_1)
                eax_1 = edx_2
            
            uint32_t edx_3 = zx.d(*(esi + 0x152))
            
            if (edx_3 s> eax_1)
                eax_1 = edx_3
        
        int32_t i = 0
        int32_t var_8_1
        
        if (eax_1 s<= 0)
            var_8_1 = 0
        else
            var_8_1 = 0x10 - eax_1
        
        if ((*(esi + 0x61) & 4) != 0 && var_8_1 s< 5)
            var_8_1 = 5
        
        if (var_8_1 s> 8)
            var_8_1 = 8
        
        if (var_8_1 s< 0)
            var_8_1 = 0
        
        int32_t ebx_1 = 1 << (8 - var_8_1.w).b
        esi[0x4b] = zx.d(var_8_1.b)
        long double x87_r7_5 = fconvert.t(esi[0x4d])
        long double temp2_1 = fconvert.t(9.9999999999999995e-07)
        x87_r7_5 - temp2_1
        uint32_t eax_2
        eax_2.w = (x87_r7_5 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe
        long double x87_r7_8
        
        if ((eax_2:1.b & 0x41) != 0)
            x87_r7_8 = float.t(1)
        else
            x87_r7_8 = fconvert.t(1.0) / (fconvert.t(esi[0x4d]) * fconvert.t(esi[0x4c]))
        
        int16_t top_5 = 0
        result = sub_498671(esi, ebx_1 << 2)
        bool cond:1_1 = (esi[0x18].w & 0x480) == 0
        esi[0x51] = result
        arg1 = nullptr
        
        if (not(cond:1_1))
            if (ebx_1 s> 0)
                do
                    char* edx_5 = arg1
                    arg1 = &arg1[1]
                    *(esi[0x51] + (edx_5 << 2)) = sub_498671(esi, 0x200)
                while (arg1 s< ebx_1)
                
                i = 0
            
            int32_t ebx_2 = ebx_1 << 8
            arg1 = nullptr
            double var_24_3 = fconvert.d(float.t(1) / fconvert.t(fconvert.d(x87_r7_8)))
            long double x87_r7_11 = float.t(ebx_2)
            
            if (ebx_2 s< 0)
                x87_r7_11 = x87_r7_11 + fconvert.t(4294967296.0)
            
            double var_2c_1 = fconvert.d(x87_r7_11)
            int16_t top_6 = 0
            
            do
                unimplemented  {fild st0, dword [ebp+0x8]}
                unimplemented  {fadd qword [0xb0d810]}
                unimplemented  {fmul st0, qword [0xac4260]}
                unimplemented  {fld st0, qword [ebp-0x20]}
                int16_t x87control_2 = sub_761640(mxcsr, x87control)
                unimplemented  {fmul st0, qword [ebp-0x28]}
                result, x87control = __ftol(x87control_2)
                top_6 += 1
                char* result_1 = result
                
                if (i u<= result)
                    int16_t eax_6 = arg1.w
                    int16_t ecx_6
                    ecx_6:1.b = eax_6.b
                    
                    do
                        uint32_t ebx_4 = i u>> (8 - var_8_1.w).b
                        result = *(esi[0x51] + ((0xff s>> var_8_1.b & i) << 2))
                        i += 1
                        *(result + (ebx_4 << 1)) = ecx_6 | eax_6
                    while (i u<= result_1)
                
                arg1 = &arg1[1]
            while (arg1 s< 0x100)
            
            for (; i u< ebx_2; i += 1)
                result = *(esi[0x51] + ((0xff s>> var_8_1.b & i) << 2))
                *(result + (i u>> (8 - var_8_1.w).b << 1)) = 0xffff
        else if (ebx_1 s> 0)
            do
                *(esi[0x51] + (arg1 << 2)) = sub_498671(esi, 0x200)
                int16_t* i_1 = nullptr
                uint32_t var_10_3 = (*((var_8_1 << 2) + &data_b54db0) * arg1) u>> 4
                
                do
                    unimplemented  {fild st0, dword [ebp-0xc]}
                    
                    if (var_10_3 s< 0)
                        unimplemented  {fadd qword [0xab6a88]}
                    
                    unimplemented  {fmul st0, qword [0xac4258]}
                    unimplemented  {fld st0, qword [ebp-0x20]}
                    int16_t x87control_3 = sub_761640(mxcsr, x87control)
                    unimplemented  {fmul st0, qword [0xb0d980]}
                    unimplemented  {fadd qword [0xb0d810]}
                    int16_t eax_19
                    eax_19, x87control = __ftol(x87control_3)
                    top_5 += 1
                    var_10_3 += 0x100
                    *(i_1 + *(esi[0x51] + (arg1 << 2))) = eax_19
                    i_1 = &i_1[1]
                while (i_1 s< 0x200)
                
                arg1 = &arg1[1]
                result = arg1
            while (result s< ebx_1)
    else
        long double x87_r7_1 = fconvert.t(esi[0x4d])
        long double temp1_1 = fconvert.t(9.9999999999999995e-07)
        x87_r7_1 - temp1_1
        result.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
        long double x87_r7_4
        
        if ((result:1.b & 0x41) != 0)
            x87_r7_4 = float.t(1)
        else
            x87_r7_4 = fconvert.t(1.0) / (fconvert.t(esi[0x4d]) * fconvert.t(esi[0x4c]))
        
        double var_24_1 = fconvert.d(x87_r7_4)
        int16_t top_4 = 0
        arg1 = nullptr
        esi[0x4e] = sub_498671(esi, 0x100)
        
        do
            unimplemented  {fild st0, dword [ebp+0x8]}
            unimplemented  {fmul st0, qword [0xab6da0]}
            unimplemented  {fld st0, qword [ebp-0x20]}
            int16_t x87control_1 = sub_761640(mxcsr, x87control)
            unimplemented  {fmul st0, qword [0xb0d930]}
            unimplemented  {fadd qword [0xb0d810]}
            result, x87control = __ftol(x87control_1)
            top_4 += 1
            char* edx_1 = arg1
            arg1 = &arg1[1]
            edx_1[esi[0x4e]] = result.b
        while (arg1 s< 0x100)

return result
