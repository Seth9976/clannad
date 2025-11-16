// 函数: sub_428975
// 地址: 0x428975
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg2
int32_t* edx = arg1
int32_t var_c = 0
int32_t eax_2 = *edx
void* edx_1 = &edx[1]

if (eax_2 u> 0)
    int32_t edi
    int32_t var_c2c_1 = edi
    
    while (true)
        int32_t edi_1 = *edx_1
        int32_t eax_3 = *(edx_1 + 4)
        void* edx_3 = edx_1 + 8
        int32_t i_28 = edi_1 & 0xfffff
        int32_t esi_1 = 0
        int32_t var_420
        int32_t __saved_ebp
        int16_t x87control
        long double st0
        int16_t top
        
        if (eax_3 u> 0)
            do
                int32_t i_29 = *edx_3
                void* edx_4 = edx_3 + 4
                int32_t eax_4 = 0
                
                if (i_29 u> 0)
                    int32_t i_27 = i_29
                    int32_t i
                    
                    do
                        int32_t ebx_1 = *edx_4
                        int32_t ecx_1 = *(edx_4 + 4)
                        edx_4 += 8
                        eax_4 = ecx_1 + (eax_4 << 2)
                        arg1 = edx_4
                        
                        if (ebx_1 == 7)
                            unimplemented  {fld st0, qword [ebp+eax*8-0xc1c]}
                            eax_4, x87control = __ftol(x87control, st0)
                            edx_4 = arg1
                        
                        int16_t top_2
                        
                        if (ebx_1 == 1)
                            top_2 = top - 1
                            unimplemented  {fld st0, qword [eax+edx*8+0x4]}
                        label_428a57:
                            eax_4, x87control = __ftol(x87control, st0)
                            top = top_2 + 1
                            edx_4 = arg1
                        else if (ebx_1 == 2 || ebx_1 == 3 || ebx_1 == 4 || ebx_1 == 5 || ebx_1 == 6)
                            top_2 = top - 1
                            unimplemented  {fld st0, qword [ecx+eax*8]}
                            goto label_428a57
                        i = i_27
                        i_27 -= 1
                    while (i != 1)
                
                edx_3 = edx_4 + 8
                int32_t eax_5 = *(edx_4 + 4) + (eax_4 << 2)
                
                switch (*edx_4)
                    case 1
                        (&var_420)[esi_1] = &arg2[modu.dp.d(0:eax_5, eax_1) * 2 + 1]
                    case 2
                        (&var_420)[esi_1] = arg4 + ((eax_5 & arg10) << 3)
                    case 3
                        (&var_420)[esi_1] = arg3 + ((eax_5 & arg9) << 3)
                    case 4
                        (&var_420)[esi_1] = arg6 + ((eax_5 & arg12) << 3)
                    case 5
                        (&var_420)[esi_1] = arg8 + ((eax_5 & arg14) << 3)
                    case 6
                        (&var_420)[esi_1] = arg7 + ((eax_5 & arg13) << 3)
                    case 7
                        (&var_420)[esi_1] = &(&__saved_ebp)[(eax_5 & 0xff) * 2 - 0x307]
                    case 9
                        (&var_420)[esi_1] = arg5 + ((eax_5 & arg11) << 2)
                
                esi_1 += 1
            while (esi_1 u< eax_3)
        
        int32_t ecx_5 = *(edx_3 + 4)
        int32_t eax_11 = *(edx_3 + 8)
        void* var_8
        void* edx_12
        
        if (ecx_5 == 7)
            edx_12 = &(&__saved_ebp)[(eax_11 & 0xff) * 2 - 0x307]
            var_8 = edx_12
        else if (ecx_5 == 4)
            edx_12 = arg6 + ((eax_11 & arg12) << 3)
            var_8 = edx_12
        else if (ecx_5 == 5)
            edx_12 = arg8 + ((eax_11 & arg14) << 3)
            var_8 = edx_12
        else if (ecx_5 != 6)
            edx_12 = var_8
        else
            edx_12 = arg7 + ((eax_11 & arg13) << 3)
            var_8 = edx_12
        
        double* var_41c
        long double st1
        
        if (edi_1 s>= 0)
            int32_t eax_22 = edi_1 & 0x7ff00000
            
            if (eax_22 u> 0x10c00000)
                if (eax_22 u> 0x20500000)
                    if (eax_22 == 0x20600000)
                        if (i_28 u> 0)
                            double* eax_37 = var_41c
                            void* edx_37 = var_8 - eax_37
                            int32_t i_1
                            
                            do
                                unimplemented  {fld st0, qword [ecx+eax]}
                                unimplemented  {fld st0, qword [eax]}
                                st1 = __fpatan(unimplemented  {fpatan }, unimplemented  {fpatan })
                                unimplemented  {fpatan }
                                unimplemented  {fpatan }
                                *(eax_37 + edx_37) =
                                    fconvert.d(unimplemented  {fstp qword [eax+edx], st0})
                                unimplemented  {fstp qword [eax+edx], st0}
                                eax_37 = &eax_37[1]
                                i_1 = i_28
                                i_28 -= 1
                            while (i_1 != 1)
                    else if (eax_22 == 0x30000000)
                        if (i_28 u> 0)
                            double* ecx_20 = var_41c
                            void* edx_35 = var_8 - ecx_20
                            int32_t i_2
                            
                            do
                                unimplemented  {fld st0, qword [esi+ecx]}
                                long double temp11_1 = fconvert.t(0.0)
                                unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp11_1
                                bool c0_10 =
                                    unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp11_1
                                bool c2_12 = is_unordered.t(
                                    unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp11_1)
                                bool c3_10 =
                                    unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp11_1
                                unimplemented  {fcomp st0, qword [0xb0d6b8]}
                                eax_22.w = (c0_10 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa
                                    | (c3_10 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                int16_t top_64
                                
                                if ((eax_22:1.b & 1) != 0)
                                    top_64 = top - 1
                                    unimplemented  {fld st0, qword [ebx+ecx]}
                                else
                                    top_64 = top - 1
                                    unimplemented  {fld st0, qword [ecx]}
                                
                                *(ecx_20 + edx_35) =
                                    fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                                unimplemented  {fstp qword [ecx+edx], st0}
                                top = top_64 + 1
                                ecx_20 = &ecx_20[1]
                                i_2 = i_28
                                i_28 -= 1
                            while (i_2 != 1)
                    else if (eax_22 == 0x50000000)
                        unimplemented  {fldz }
                        *edx_12 = fconvert.d(unimplemented  {fstp qword [edx], st0})
                        unimplemented  {fstp qword [edx], st0}
                        
                        if (i_28 u> 0)
                            double* eax_36 = var_41c
                            int32_t i_3
                            
                            do
                                unimplemented  {fld st0, qword [edx+eax]}
                                unimplemented  {fmul st0, qword [eax]}
                                eax_36 = &eax_36[1]
                                i_3 = i_28
                                i_28 -= 1
                                unimplemented  {fadd qword [ecx]}
                                *var_8 = fconvert.d(unimplemented  {fstp qword [ecx], st0})
                                unimplemented  {fstp qword [ecx], st0}
                            while (i_3 != 1)
                    else if (eax_22 == 0x50200000)
                        x87control = sub_4287de(i_28, &var_420, var_8)
                    else if (eax_22 == 0x70e00000)
                        unimplemented  {fldz }
                        *var_8 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                        unimplemented  {fstp qword [eax], st0}
                        uint32_t eax_34 = eax_3 u>> 1
                        int32_t ecx_18 = 0
                        
                        if (eax_34 != 0)
                            void* edx_33 = &(&__saved_ebp)[eax_34 - 0x107]
                            
                            do
                                unimplemented  {fld st0, qword [edi]}
                                unimplemented  {fmul st0, qword [ebx]}
                                ecx_18 += 1
                                edx_33 += 4
                                unimplemented  {fadd qword [eax]}
                                *var_8 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                                unimplemented  {fstp qword [eax], st0}
                            while (ecx_18 u< eax_34)
                else if (eax_22 == 0x20500000)
                    if (i_28 u> 0)
                        double* eax_31 = var_41c
                        double* edx_32 = var_8 - eax_31
                        int32_t i_4
                        
                        do
                            unimplemented  {fld st0, qword [ecx+eax]}
                            unimplemented  {fmul st0, qword [eax]}
                            *(edx_32 + eax_31) =
                                fconvert.d(unimplemented  {fstp qword [edx+eax], st0})
                            unimplemented  {fstp qword [edx+eax], st0}
                            eax_31 = &eax_31[1]
                            i_4 = i_28
                            i_28 -= 1
                        while (i_4 != 1)
                else if (eax_22 == 0x20000000)
                    if (i_28 u> 0)
                        double* ecx_17 = var_41c
                        void* edx_30 = var_8 - ecx_17
                        int32_t i_5
                        
                        do
                            unimplemented  {fld st0, qword [ecx+esi]}
                            long double temp12_1 = fconvert.t(*ecx_17)
                            unimplemented  {fcomp st0, qword [ecx]} f- temp12_1
                            bool c0_9 = unimplemented  {fcomp st0, qword [ecx]} f< temp12_1
                            bool c2_11 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp12_1)
                            bool c3_9 = unimplemented  {fcomp st0, qword [ecx]} f== temp12_1
                            unimplemented  {fcomp st0, qword [ecx]}
                            eax_22.w = (c0_9 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
                                | (c3_9 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            bool p_5 = unimplemented  {test ah, 0x5}
                            int16_t top_56
                            
                            if (p_5)
                                top_56 = top - 1
                                unimplemented  {fld st0, qword [ecx]}
                            else
                                top_56 = top - 1
                                unimplemented  {fld st0, qword [ecx+esi]}
                            
                            *(ecx_17 + edx_30) =
                                fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                            unimplemented  {fstp qword [ecx+edx], st0}
                            top = top_56 + 1
                            ecx_17 = &ecx_17[1]
                            i_5 = i_28
                            i_28 -= 1
                        while (i_5 != 1)
                else if (eax_22 == 0x20100000)
                    if (i_28 u> 0)
                        double* ecx_16 = var_41c
                        void* edx_28 = var_8 - ecx_16
                        int32_t i_6
                        
                        do
                            unimplemented  {fld st0, qword [ecx+esi]}
                            long double temp16_1 = fconvert.t(*ecx_16)
                            unimplemented  {fcomp st0, qword [ecx]} f- temp16_1
                            bool c0_8 = unimplemented  {fcomp st0, qword [ecx]} f< temp16_1
                            bool c2_10 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp16_1)
                            bool c3_8 = unimplemented  {fcomp st0, qword [ecx]} f== temp16_1
                            unimplemented  {fcomp st0, qword [ecx]}
                            eax_22.w = (c0_8 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa
                                | (c3_8 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            int16_t top_53
                            
                            if ((eax_22:1.b & 0x41) != 0)
                                top_53 = top - 1
                                unimplemented  {fld st0, qword [ecx]}
                            else
                                top_53 = top - 1
                                unimplemented  {fld st0, qword [ecx+esi]}
                            
                            *(ecx_16 + edx_28) =
                                fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                            unimplemented  {fstp qword [ecx+edx], st0}
                            top = top_53 + 1
                            ecx_16 = &ecx_16[1]
                            i_6 = i_28
                            i_28 -= 1
                        while (i_6 != 1)
                else if (eax_22 == 0x20200000)
                    if (i_28 u> 0)
                        double* ecx_15 = var_41c
                        void* edx_26 = var_8 - ecx_15
                        int32_t i_7
                        
                        do
                            unimplemented  {fld st0, qword [ecx+esi]}
                            long double temp22_1 = fconvert.t(*ecx_15)
                            unimplemented  {fcomp st0, qword [ecx]} f- temp22_1
                            bool c0_7 = unimplemented  {fcomp st0, qword [ecx]} f< temp22_1
                            bool c2_9 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp22_1)
                            bool c3_7 = unimplemented  {fcomp st0, qword [ecx]} f== temp22_1
                            unimplemented  {fcomp st0, qword [ecx]}
                            eax_22.w = (c0_7 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa
                                | (c3_7 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            bool p_4 = unimplemented  {test ah, 0x5}
                            int16_t top_50
                            
                            if (p_4)
                                top_50 = top - 1
                                unimplemented  {fldz }
                            else
                                top_50 = top - 1
                                unimplemented  {fld1 }
                            
                            *(ecx_15 + edx_26) =
                                fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                            unimplemented  {fstp qword [ecx+edx], st0}
                            top = top_50 + 1
                            ecx_15 = &ecx_15[1]
                            i_7 = i_28
                            i_28 -= 1
                        while (i_7 != 1)
                else if (eax_22 == 0x20300000)
                    if (i_28 u> 0)
                        double* ecx_14 = var_41c
                        void* edx_24 = var_8 - ecx_14
                        int32_t i_8
                        
                        do
                            unimplemented  {fld st0, qword [ecx+esi]}
                            long double temp28_1 = fconvert.t(*ecx_14)
                            unimplemented  {fcomp st0, qword [ecx]} f- temp28_1
                            bool c0_6 = unimplemented  {fcomp st0, qword [ecx]} f< temp28_1
                            bool c2_8 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp28_1)
                            bool c3_6 = unimplemented  {fcomp st0, qword [ecx]} f== temp28_1
                            unimplemented  {fcomp st0, qword [ecx]}
                            eax_22.w = (c0_6 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa
                                | (c3_6 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            int16_t top_47
                            
                            if ((eax_22:1.b & 1) != 0)
                                top_47 = top - 1
                                unimplemented  {fldz }
                            else
                                top_47 = top - 1
                                unimplemented  {fld1 }
                            
                            *(ecx_14 + edx_24) =
                                fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                            unimplemented  {fstp qword [ecx+edx], st0}
                            top = top_47 + 1
                            ecx_14 = &ecx_14[1]
                            i_8 = i_28
                            i_28 -= 1
                        while (i_8 != 1)
                else if (eax_22 == 0x20400000 && i_28 u> 0)
                    double* eax_30 = var_41c
                    void* edx_22 = var_8 - eax_30
                    int32_t i_9
                    
                    do
                        unimplemented  {fld st0, qword [ecx+eax]}
                        unimplemented  {fadd qword [eax]}
                        *(eax_30 + edx_22) = fconvert.d(unimplemented  {fstp qword [eax+edx], st0})
                        unimplemented  {fstp qword [eax+edx], st0}
                        eax_30 = &eax_30[1]
                        i_9 = i_28
                        i_28 -= 1
                    while (i_9 != 1)
            else if (eax_22 == 0x10c00000)
                if (i_28 u> 0)
                    void* eax_29 = var_8
                    int32_t i_10
                    
                    do
                        unimplemented  {fld st0, qword [eax+ecx]}
                        unimplemented  {fld1 }
                        st1 = __fpatan(unimplemented  {fpatan }, unimplemented  {fpatan })
                        unimplemented  {fpatan }
                        unimplemented  {fpatan }
                        *eax_29 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                        unimplemented  {fstp qword [eax], st0}
                        eax_29 += 8
                        i_10 = i_28
                        i_28 -= 1
                    while (i_10 != 1)
            else
                int32_t mxcsr
                
                if (eax_22 u> 0x10600000)
                    if (eax_22 == 0x10700000)
                        if (i_28 u> 0)
                            void* eax_28 = var_8
                            int32_t i_11
                            
                            do
                                unimplemented  {fld st0, qword [eax+ecx]}
                                unimplemented  {fabs }
                                unimplemented  {fsqrt }
                                unimplemented  {fdivr st0, qword [0xb0d850]}
                                *eax_28 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                                unimplemented  {fstp qword [eax], st0}
                                eax_28 += 8
                                i_11 = i_28
                                i_28 -= 1
                            while (i_11 != 1)
                    else if (eax_22 == 0x10800000)
                        if (i_28 u> 0)
                            void* eax_27 = var_8
                            int32_t i_12
                            
                            do
                                unimplemented  {fld st0, qword [eax+ecx]}
                                bool c2_7
                                st0, c2_7 = __fsin(unimplemented  {fsin })
                                unimplemented  {fsin }
                                *eax_27 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                                unimplemented  {fstp qword [eax], st0}
                                eax_27 += 8
                                i_12 = i_28
                                i_28 -= 1
                            while (i_12 != 1)
                    else if (eax_22 == 0x10900000)
                        if (i_28 u> 0)
                            void* eax_26 = var_8
                            int32_t i_13
                            
                            do
                                unimplemented  {fld st0, qword [eax+ecx]}
                                bool c2_6
                                st0, c2_6 = __fcos(unimplemented  {fcos })
                                unimplemented  {fcos }
                                *eax_26 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                                unimplemented  {fstp qword [eax], st0}
                                eax_26 += 8
                                i_13 = i_28
                                i_28 -= 1
                            while (i_13 != 1)
                    else if (eax_22 == 0x10a00000)
                        if (i_28 u> 0)
                            void* esi_7 = var_8
                            int32_t i_14
                            
                            do
                                unimplemented  {fld st0, qword [esi+ebx]}
                                st0, x87control = sub_7622d0(mxcsr, x87control, st0)
                                unimplemented  {call 0x7622d0}
                                *esi_7 = fconvert.d(unimplemented  {fstp qword [esi], st0})
                                unimplemented  {fstp qword [esi], st0}
                                esi_7 += 8
                                i_14 = i_28
                                i_28 -= 1
                            while (i_14 != 1)
                    else if (eax_22 == 0x10b00000 && i_28 u> 0)
                        void* esi_6 = var_8
                        int32_t i_15
                        
                        do
                            unimplemented  {fld st0, qword [esi+ebx]}
                            st0, x87control = sub_7614c0(mxcsr, x87control, st0)
                            unimplemented  {call 0x7614c0}
                            *esi_6 = fconvert.d(unimplemented  {fstp qword [esi], st0})
                            unimplemented  {fstp qword [esi], st0}
                            esi_6 += 8
                            i_15 = i_28
                            i_28 -= 1
                        while (i_15 != 1)
                else if (eax_22 == 0x10600000)
                    int32_t esi_5 = 0
                    
                    if (i_28 u> 0)
                        void* ecx_13 = var_8
                        
                        do
                            (&var_420)[esi_5]
                            unimplemented  {fld st0, qword [0xb0d6b8]}
                            unimplemented  {fld st0, qword [eax]}
                            unimplemented  {fucompp } f- unimplemented  {fucompp }
                            bool c0_5 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                            bool c2_5 =
                                is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                            bool c3_5 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            int32_t eax_25
                            eax_25.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa
                                | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            bool p_3 = unimplemented  {test ah, 0x44}
                            int16_t top_35
                            
                            if (not(p_3))
                                top_35 = top - 1
                                unimplemented  {fldz }
                            else
                                unimplemented  {fld st0, qword [ecx+edx]}
                                unimplemented  {fabs }
                                unimplemented  {fldln2 }
                                unimplemented  {fxch st0, st1}
                                unimplemented  {fxch st0, st1}
                                st1 = __fyl2x(unimplemented  {fyl2x }, unimplemented  {fyl2x })
                                unimplemented  {fyl2x }
                                unimplemented  {fyl2x }
                                top_35 = top - 1
                                unimplemented  {fmul st0, qword [0xab7948]}
                            
                            *ecx_13 = fconvert.d(unimplemented  {fstp qword [ecx], st0})
                            unimplemented  {fstp qword [ecx], st0}
                            top = top_35 + 1
                            esi_5 += 1
                            ecx_13 += 8
                        while (esi_5 u< i_28)
                else if (eax_22 == 0x10000000)
                    __builtin_memcpy(edx_12, var_420, i_28 * 8)
                else if (eax_22 == 0x10100000)
                    if (i_28 u> 0)
                        void* eax_24 = var_8
                        int32_t i_16
                        
                        do
                            unimplemented  {fld st0, qword [eax+ecx]}
                            unimplemented  {fchs }
                            *eax_24 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                            unimplemented  {fstp qword [eax], st0}
                            eax_24 += 8
                            i_16 = i_28
                            i_28 -= 1
                        while (i_16 != 1)
                else if (eax_22 == 0x10300000)
                    if (i_28 u> 0)
                        void* eax_23 = var_8
                        int32_t i_17
                        
                        do
                            unimplemented  {fld1 }
                            unimplemented  {fdiv st0, qword [eax+ecx]}
                            *eax_23 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                            unimplemented  {fstp qword [eax], st0}
                            eax_23 += 8
                            i_17 = i_28
                            i_28 -= 1
                        while (i_17 != 1)
                else if (eax_22 == 0x10400000)
                    if (i_28 u> 0)
                        int32_t esi_3 = var_420
                        void* ebx_4 = var_8 - esi_3
                        int32_t i_18
                        
                        do
                            unimplemented  {fld st0, qword [esi]}
                            unimplemented  {fstp qword [esp], st0}
                            st0, x87control = sub_74c3d0(mxcsr, x87control, 4.41762107e-29f)
                            unimplemented  {call 0x74c3d0}
                            unimplemented  {fsubr st0, qword [esi]}
                            *(ebx_4 + esi_3) =
                                fconvert.d(unimplemented  {fstp qword [ebx+esi], st0})
                            unimplemented  {fstp qword [ebx+esi], st0}
                            esi_3 += 8
                            i_18 = i_28
                            i_28 -= 1
                        while (i_18 != 1)
                else if (eax_22 == 0x10500000 && i_28 u> 0)
                    void* esi_2 = var_8
                    int32_t i_19
                    
                    do
                        unimplemented  {fld st0, qword [0xb0d8a8]}
                        unimplemented  {fld st0, qword [ebx+esi]}
                        x87control = sub_761640(mxcsr, x87control, st0, st1)
                        *esi_2 = fconvert.d(unimplemented  {fstp qword [esi], st0})
                        unimplemented  {fstp qword [esi], st0}
                        top += 1
                        esi_2 += 8
                        i_19 = i_28
                        i_28 -= 1
                    while (i_19 != 1)
        else
            int32_t eax_15 = edi_1 & 0x7ff00000
            
            if (eax_15 u> 0x20400000)
                if (eax_15 == 0x20500000)
                    if (i_28 u> 0)
                        void* eax_21 = var_8
                        int32_t i_20
                        
                        do
                            unimplemented  {fld st0, qword [ecx+eax]}
                            unimplemented  {fmul st0, qword [edx]}
                            *eax_21 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                            unimplemented  {fstp qword [eax], st0}
                            eax_21 += 8
                            i_20 = i_28
                            i_28 -= 1
                        while (i_20 != 1)
                else if (eax_15 == 0x20600000)
                    if (i_28 u> 0)
                        void* eax_20 = var_8
                        int32_t i_21
                        
                        do
                            unimplemented  {fld st0, qword [edx]}
                            unimplemented  {fld st0, qword [ecx+eax]}
                            st1 = __fpatan(unimplemented  {fpatan }, unimplemented  {fpatan })
                            unimplemented  {fpatan }
                            unimplemented  {fpatan }
                            *eax_20 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                            unimplemented  {fstp qword [eax], st0}
                            eax_20 += 8
                            i_21 = i_28
                            i_28 -= 1
                        while (i_21 != 1)
                else if (eax_15 == 0x50000000)
                    unimplemented  {fldz }
                    int32_t ecx_11 = 0
                    *var_8 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                    unimplemented  {fstp qword [eax], st0}
                    
                    if (i_28 u> 0)
                        do
                            unimplemented  {fld st0, qword [edx+ecx*8]}
                            unimplemented  {fmul st0, qword [edx]}
                            ecx_11 += 1
                            unimplemented  {fadd qword [eax]}
                            *var_8 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                            unimplemented  {fstp qword [eax], st0}
                        while (ecx_11 u< i_28)
            else if (eax_15 == 0x20400000)
                if (i_28 u> 0)
                    void* eax_18 = var_8
                    int32_t i_22
                    
                    do
                        unimplemented  {fld st0, qword [ecx+eax]}
                        unimplemented  {fadd qword [edx]}
                        *eax_18 = fconvert.d(unimplemented  {fstp qword [eax], st0})
                        unimplemented  {fstp qword [eax], st0}
                        eax_18 += 8
                        i_22 = i_28
                        i_28 -= 1
                    while (i_22 != 1)
            else if (eax_15 == 0x20000000)
                if (i_28 u> 0)
                    double* ecx_10 = var_41c
                    void* edx_20 = var_8 - ecx_10
                    int32_t i_23
                    
                    do
                        unimplemented  {fld st0, qword [esi]}
                        long double temp10_1 = fconvert.t(*ecx_10)
                        unimplemented  {fcomp st0, qword [ecx]} f- temp10_1
                        bool c0_4 = unimplemented  {fcomp st0, qword [ecx]} f< temp10_1
                        bool c2_4 =
                            is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp10_1)
                        bool c3_4 = unimplemented  {fcomp st0, qword [ecx]} f== temp10_1
                        unimplemented  {fcomp st0, qword [ecx]}
                        eax_15.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa
                            | (c3_4 ? 1 : 0) << 0xe | (top & 7) << 0xb
                        bool p_2 = unimplemented  {test ah, 0x5}
                        int16_t top_14
                        
                        if (p_2)
                            top_14 = top - 1
                            unimplemented  {fld st0, qword [ecx]}
                        else
                            top_14 = top - 1
                            unimplemented  {fld st0, qword [esi]}
                        
                        *(ecx_10 + edx_20) = fconvert.d(unimplemented  {fstp qword [ecx+edx], st0})
                        unimplemented  {fstp qword [ecx+edx], st0}
                        top = top_14 + 1
                        ecx_10 = &ecx_10[1]
                        i_23 = i_28
                        i_28 -= 1
                    while (i_23 != 1)
            else if (eax_15 == 0x20100000)
                if (i_28 u> 0)
                    double* ecx_9 = var_41c
                    double* edx_18 = var_8 - ecx_9
                    int32_t i_24
                    
                    do
                        unimplemented  {fld st0, qword [esi]}
                        long double temp14_1 = fconvert.t(*ecx_9)
                        unimplemented  {fcomp st0, qword [ecx]} f- temp14_1
                        bool c0_3 = unimplemented  {fcomp st0, qword [ecx]} f< temp14_1
                        bool c2_3 =
                            is_unordered.t(unimplemented  {fcomp st0, qword [ecx]}, temp14_1)
                        bool c3_3 = unimplemented  {fcomp st0, qword [ecx]} f== temp14_1
                        unimplemented  {fcomp st0, qword [ecx]}
                        eax_15.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa
                            | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb
                        int16_t top_11
                        
                        if ((eax_15:1.b & 0x41) != 0)
                            top_11 = top - 1
                            unimplemented  {fld st0, qword [ecx]}
                        else
                            top_11 = top - 1
                            unimplemented  {fld st0, qword [esi]}
                        
                        *(edx_18 + ecx_9) = fconvert.d(unimplemented  {fstp qword [edx+ecx], st0})
                        unimplemented  {fstp qword [edx+ecx], st0}
                        top = top_11 + 1
                        ecx_9 = &ecx_9[1]
                        i_24 = i_28
                        i_28 -= 1
                    while (i_24 != 1)
            else if (eax_15 == 0x20200000)
                if (i_28 u> 0)
                    void* ecx_8 = var_8
                    void* edx_16 = var_41c - ecx_8
                    int32_t i_25
                    
                    do
                        unimplemented  {fld st0, qword [eax]}
                        long double temp19_1 = fconvert.t(*(edx_16 + ecx_8))
                        unimplemented  {fcomp st0, qword [edx+ecx]} f- temp19_1
                        bool c0_2 = unimplemented  {fcomp st0, qword [edx+ecx]} f< temp19_1
                        bool c2_2 =
                            is_unordered.t(unimplemented  {fcomp st0, qword [edx+ecx]}, temp19_1)
                        bool c3_2 = unimplemented  {fcomp st0, qword [edx+ecx]} f== temp19_1
                        unimplemented  {fcomp st0, qword [edx+ecx]}
                        int32_t eax_17
                        eax_17.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                            | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                        bool p_1 = unimplemented  {test ah, 0x5}
                        int16_t top_8
                        
                        if (p_1)
                            top_8 = top - 1
                            unimplemented  {fldz }
                        else
                            top_8 = top - 1
                            unimplemented  {fld1 }
                        
                        *ecx_8 = fconvert.d(unimplemented  {fstp qword [ecx], st0})
                        unimplemented  {fstp qword [ecx], st0}
                        top = top_8 + 1
                        ecx_8 += 8
                        i_25 = i_28
                        i_28 -= 1
                    while (i_25 != 1)
            else if (eax_15 == 0x20300000 && i_28 u> 0)
                void* ecx_7 = var_8
                void* edx_14 = var_41c - ecx_7
                int32_t i_26
                
                do
                    unimplemented  {fld st0, qword [eax]}
                    long double temp26_1 = fconvert.t(*(edx_14 + ecx_7))
                    unimplemented  {fcomp st0, qword [edx+ecx]} f- temp26_1
                    bool c0_1 = unimplemented  {fcomp st0, qword [edx+ecx]} f< temp26_1
                    bool c2_1 =
                        is_unordered.t(unimplemented  {fcomp st0, qword [edx+ecx]}, temp26_1)
                    bool c3_1 = unimplemented  {fcomp st0, qword [edx+ecx]} f== temp26_1
                    unimplemented  {fcomp st0, qword [edx+ecx]}
                    int16_t top_5
                    
                    if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb):1.b & 1) != 0)
                        top_5 = top - 1
                        unimplemented  {fldz }
                    else
                        top_5 = top - 1
                        unimplemented  {fld1 }
                    
                    *ecx_7 = fconvert.d(unimplemented  {fstp qword [ecx], st0})
                    unimplemented  {fstp qword [ecx], st0}
                    top = top_5 + 1
                    ecx_7 += 8
                    i_26 = i_28
                    i_28 -= 1
                while (i_26 != 1)
        var_c += 1
        
        if (var_c u>= eax_2)
            break
        
        edx_1 = edx_3 + 0xc

return 0
