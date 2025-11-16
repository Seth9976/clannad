// 函数: sub_71e840
// 地址: 0x71e840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t edx_1 = *(arg6 + 8)
uint32_t edi = 0
int32_t result = 0

if (edx_1 == 0)
    edx_1 = 2
else if (edx_1 == 1)
    edx_1 = 1
else if (edx_1 == 2)
    edx_1 = 0

int32_t var_18 = sx.d(*arg3)
void* esi_5 = &arg3[2]
int32_t var_1c = sx.d(arg3[1])
int32_t* var_24 = &var_18
int32_t* var_20 = &var_1c

switch (edx_1)
    case 0
        int32_t edx_2 = 0
        int32_t var_14_1 = 0
        
        if (arg2 u> 0)
            while (true)
                int32_t* ecx_4 = (&var_24)[edx_2 & 1]
                int32_t* var_8_1 = ecx_4
                int32_t ebx_1 = *ecx_4
                
                if (edi == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_4.b = eax.b
                    eax += 3
                    int32_t edx_5 = zx.d(*esi_5) u>> ecx_4.b & 7
                    
                    if (edx_5 u>= 4)
                        if (edx_5 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_26 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_26.b & 4) == 0)
                                ebx_1 += edx_26 << 8
                            else
                                ebx_1 -= (edx_26 & 3) << 8
                        else if (edx_5 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_32 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_32.b & 4) == 0)
                                ebx_1 += edx_32 << 9
                            else
                                ebx_1 -= (edx_32 & 3) << 9
                        else if (edx_5 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_4.b & 1) != 0)
                                ebx_1 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_4.b = eax.b
                                eax += 6
                                int32_t edx_47 = zx.d(*esi_5) u>> ecx_4.b & 0x3f
                                
                                if ((edx_47.b & 0x20) == 0)
                                    ebx_1 += edx_47 << 0xb
                                else
                                    ebx_1 -= (edx_47 & 0x1f) << 0xb
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_38 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_38.b & 4) == 0)
                                ebx_1 += edx_38 << 0xa
                            else
                                ebx_1 -= (edx_38 & 3) << 0xa
                    else if (edx_5 != 0)
                        if (edx_5 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_8 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_8.b & 4) == 0)
                                ebx_1 += edx_8 << 5
                            else
                                ebx_1 -= (edx_8 & 3) << 5
                        else if (edx_5 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_20 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_20.b & 4) == 0)
                                ebx_1 += edx_20 << 7
                            else
                                ebx_1 -= (edx_20 & 3) << 7
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_4.b = eax.b
                            eax += 3
                            int32_t edx_14 = zx.d(*esi_5) u>> ecx_4.b & 7
                            
                            if ((edx_14.b & 4) == 0)
                                ebx_1 += edx_14 << 6
                            else
                                ebx_1 -= (edx_14 & 3) << 6
                    else if (*(arg6 + 0xc) != edx_5)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_5
                        ecx_5.b = eax.b
                        eax += 1
                        edi = zx.d(*esi_5) u>> ecx_5.b & 1
                        
                        if (edi == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_5.b = eax.b
                            eax += 2
                            edi = zx.d(*esi_5) u>> ecx_5.b & 3
                            
                            if (edi == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_5.b = eax.b
                                edi = zx.d((zx.d(*esi_5) u>> ecx_5.b).b)
                                eax += 8
                else
                    edi -= 1
                
                if (result u>= arg4)
                    break
                
                edx_2 = var_14_1 + 1
                result += 1
                var_14_1 = edx_2
                *arg5 = ebx_1.w
                arg5 += 2
                *var_8_1 = ebx_1
                
                if (edx_2 u>= arg2)
                    return result
    case 1
        int32_t edx_53 = 0
        int32_t var_14_2 = 0
        
        if (arg2 u> 0)
            while (true)
                int32_t* ecx_11 = (&var_24)[edx_53 & 1]
                int32_t* var_8_2 = ecx_11
                int32_t ebx_2 = *ecx_11
                
                if (edi == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_11.b = eax.b
                    eax += 3
                    int32_t edx_56 = zx.d(*esi_5) u>> ecx_11.b & 7
                    
                    if (edx_56 u>= 4)
                        if (edx_56 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_77 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_77.b & 8) == 0)
                                ebx_2 += edx_77 << 7
                            else
                                ebx_2 -= (edx_77 & 7) << 7
                        else if (edx_56 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_83 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_83.b & 8) == 0)
                                ebx_2 += edx_83 << 8
                            else
                                ebx_2 -= (edx_83 & 7) << 8
                        else if (edx_56 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_11.b & 1) != 0)
                                ebx_2 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_11.b = eax.b
                                eax += 7
                                int32_t edx_98 = zx.d(*esi_5) u>> ecx_11.b & 0x7f
                                
                                if ((edx_98.b & 0x40) == 0)
                                    ebx_2 += edx_98 << 0xa
                                else
                                    ebx_2 -= (edx_98 & 0x3f) << 0xa
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_89 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_89.b & 8) == 0)
                                ebx_2 += edx_89 << 9
                            else
                                ebx_2 -= (edx_89 & 7) << 9
                    else if (edx_56 != 0)
                        if (edx_56 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_59 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_59.b & 8) == 0)
                                ebx_2 += edx_59 << 4
                            else
                                ebx_2 -= (edx_59 & 7) << 4
                        else if (edx_56 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_71 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_71.b & 8) == 0)
                                ebx_2 += edx_71 << 6
                            else
                                ebx_2 -= (edx_71 & 7) << 6
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_11.b = eax.b
                            eax += 4
                            int32_t edx_65 = zx.d(*esi_5) u>> ecx_11.b & 0xf
                            
                            if ((edx_65.b & 8) == 0)
                                ebx_2 += edx_65 << 5
                            else
                                ebx_2 -= (edx_65 & 7) << 5
                    else if (*(arg6 + 0xc) != edx_56)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_12
                        ecx_12.b = eax.b
                        eax += 1
                        edi = zx.d(*esi_5) u>> ecx_12.b & 1
                        
                        if (edi == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_12.b = eax.b
                            eax += 2
                            edi = zx.d(*esi_5) u>> ecx_12.b & 3
                            
                            if (edi == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_12.b = eax.b
                                edi = zx.d((zx.d(*esi_5) u>> ecx_12.b).b)
                                eax += 8
                else
                    edi -= 1
                
                if (result u>= arg4)
                    break
                
                edx_53 = var_14_2 + 1
                result += 1
                var_14_2 = edx_53
                *arg5 = ebx_2.w
                arg5 += 2
                *var_8_2 = ebx_2
                
                if (edx_53 u>= arg2)
                    return result
    case 2
        int32_t edx_104 = 0
        int32_t var_14_3 = 0
        
        if (arg2 u> 0)
            while (true)
                int32_t* ecx_18 = (&var_24)[edx_104 & 1]
                int32_t* var_8_3 = ecx_18
                int32_t ebx_3 = *ecx_18
                
                if (edi == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_18.b = eax.b
                    eax += 3
                    int32_t edx_107 = zx.d(*esi_5) u>> ecx_18.b & 7
                    
                    if (edx_107 u>= 4)
                        if (edx_107 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_127 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_127.b & 0x10) == 0)
                                ebx_3 += edx_127 << 6
                            else
                                ebx_3 -= (edx_127 & 0xf) << 6
                        else if (edx_107 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_133 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_133.b & 0x10) == 0)
                                ebx_3 += edx_133 << 7
                            else
                                ebx_3 -= (edx_133 & 0xf) << 7
                        else if (edx_107 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_18.b & 1) != 0)
                                ebx_3 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_18.b = eax.b
                                eax += 8
                                uint32_t edx_148 = zx.d((zx.d(*esi_5) u>> ecx_18.b).b)
                                
                                if (edx_148.b s>= 0)
                                    ebx_3 += edx_148 << 9
                                else
                                    ebx_3 -= (edx_148 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_139 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_139.b & 0x10) == 0)
                                ebx_3 += edx_139 << 8
                            else
                                ebx_3 -= (edx_139 & 0xf) << 8
                    else if (edx_107 != 0)
                        if (edx_107 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_110 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_110.b & 0x10) == 0)
                                ebx_3 += edx_110 << 3
                            else
                                ebx_3 -= (edx_110 & 0xf) << 3
                        else if (edx_107 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_121 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_121.b & 0x10) == 0)
                                ebx_3 += edx_121 << 5
                            else
                                ebx_3 -= (edx_121 & 0xf) << 5
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_18.b = eax.b
                            eax += 5
                            int32_t edx_115 = zx.d(*esi_5) u>> ecx_18.b & 0x1f
                            
                            if ((edx_115.b & 0x10) == 0)
                                ebx_3 += edx_115 << 4
                            else
                                ebx_3 -= (edx_115 & 0xf) << 4
                    else if (*(arg6 + 0xc) != edx_107)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_19
                        ecx_19.b = eax.b
                        eax += 1
                        edi = zx.d(*esi_5) u>> ecx_19.b & 1
                        
                        if (edi == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_19.b = eax.b
                            eax += 2
                            edi = zx.d(*esi_5) u>> ecx_19.b & 3
                            
                            if (edi == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_19.b = eax.b
                                edi = zx.d((zx.d(*esi_5) u>> ecx_19.b).b)
                                eax += 8
                else
                    edi -= 1
                
                if (result u>= arg4)
                    break
                
                edx_104 = var_14_3 + 1
                result += 1
                var_14_3 = edx_104
                *arg5 = ebx_3.w
                arg5 += 2
                *var_8_3 = ebx_3
                
                if (edx_104 u>= arg2)
                    return result
    case 3
        int32_t edx_154 = 0
        int32_t var_14_4 = 0
        
        if (arg2 u> 0)
            while (true)
                int32_t* ecx_25 = (&var_24)[edx_154 & 1]
                int32_t* var_8_4 = ecx_25
                int32_t ebx_4 = *ecx_25
                
                if (edi == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_25.b = eax.b
                    eax += 3
                    int32_t edx_157 = zx.d(*esi_5) u>> ecx_25.b & 7
                    
                    if (edx_157 u>= 4)
                        if (edx_157 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_176 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_176.b & 0x20) == 0)
                                ebx_4 += edx_176 << 5
                            else
                                ebx_4 -= (edx_176 & 0x1f) << 5
                        else if (edx_157 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_182 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_182.b & 0x20) == 0)
                                ebx_4 += edx_182 << 6
                            else
                                ebx_4 -= (edx_182 & 0x1f) << 6
                        else if (edx_157 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_25.b & 1) != 0)
                                ebx_4 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_25.b = eax.b
                                eax += 8
                                uint32_t edx_197 = zx.d((zx.d(*esi_5) u>> ecx_25.b).b)
                                
                                if (edx_197.b s>= 0)
                                    ebx_4 += edx_197 << 9
                                else
                                    ebx_4 -= (edx_197 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_188 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_188.b & 0x20) == 0)
                                ebx_4 += edx_188 << 7
                            else
                                ebx_4 -= (edx_188 & 0x1f) << 7
                    else if (edx_157 != 0)
                        if (edx_157 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_160 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_160.b & 0x20) == 0)
                                ebx_4 += edx_160 << 2
                            else
                                ebx_4 -= (edx_160 & 0x1f) << 2
                        else if (edx_157 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_170 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_170.b & 0x20) == 0)
                                ebx_4 += edx_170 << 4
                            else
                                ebx_4 -= (edx_170 & 0x1f) << 4
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_25.b = eax.b
                            eax += 6
                            int32_t edx_165 = zx.d(*esi_5) u>> ecx_25.b & 0x3f
                            
                            if ((edx_165.b & 0x20) == 0)
                                ebx_4 += edx_165 << 3
                            else
                                ebx_4 -= (edx_165 & 0x1f) << 3
                    else if (*(arg6 + 0xc) != edx_157)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_26
                        ecx_26.b = eax.b
                        eax += 1
                        edi = zx.d(*esi_5) u>> ecx_26.b & 1
                        
                        if (edi == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_26.b = eax.b
                            eax += 2
                            edi = zx.d(*esi_5) u>> ecx_26.b & 3
                            
                            if (edi == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_26.b = eax.b
                                edi = zx.d((zx.d(*esi_5) u>> ecx_26.b).b)
                                eax += 8
                else
                    edi -= 1
                
                if (result u>= arg4)
                    break
                
                edx_154 = var_14_4 + 1
                result += 1
                var_14_4 = edx_154
                *arg5 = ebx_4.w
                arg5 += 2
                *var_8_4 = ebx_4
                
                if (edx_154 u>= arg2)
                    return result
    case 4
        int32_t edx_203 = 0
        int32_t var_14_5 = 0
        
        if (arg2 u> 0)
            while (true)
                int32_t* ecx_32 = (&var_24)[edx_203 & 1]
                int32_t* var_8_5 = ecx_32
                int32_t ebx_5 = *ecx_32
                
                if (edi == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_32.b = eax.b
                    eax += 3
                    int32_t edx_206 = zx.d(*esi_5) u>> ecx_32.b & 7
                    
                    if (edx_206 u>= 4)
                        if (edx_206 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_225 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_225.b & 0x40) == 0)
                                ebx_5 += edx_225 << 5
                            else
                                ebx_5 -= (edx_225 & 0x3f) << 5
                        else if (edx_206 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_231 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_231.b & 0x40) == 0)
                                ebx_5 += edx_231 << 6
                            else
                                ebx_5 -= (edx_231 & 0x3f) << 6
                        else if (edx_206 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_32.b & 1) != 0)
                                ebx_5 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_32.b = eax.b
                                eax += 8
                                uint32_t edx_246 = zx.d((zx.d(*esi_5) u>> ecx_32.b).b)
                                
                                if (edx_246.b s>= 0)
                                    ebx_5 += edx_246 << 9
                                else
                                    ebx_5 -= (edx_246 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_237 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_237.b & 0x40) == 0)
                                ebx_5 += edx_237 << 7
                            else
                                ebx_5 -= (edx_237 & 0x3f) << 7
                    else if (edx_206 != 0)
                        if (edx_206 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_209 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_209.b & 0x40) == 0)
                                ebx_5 += edx_209 << 2
                            else
                                ebx_5 -= (edx_209 & 0x3f) << 2
                        else if (edx_206 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_219 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_219.b & 0x40) == 0)
                                ebx_5 += edx_219 << 4
                            else
                                ebx_5 -= (edx_219 & 0x3f) << 4
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_32.b = eax.b
                            eax += 7
                            int32_t edx_214 = zx.d(*esi_5) u>> ecx_32.b & 0x7f
                            
                            if ((edx_214.b & 0x40) == 0)
                                ebx_5 += edx_214 << 3
                            else
                                ebx_5 -= (edx_214 & 0x3f) << 3
                    else if (*(arg6 + 0xc) != edx_206)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_33
                        ecx_33.b = eax.b
                        eax += 1
                        edi = zx.d(*esi_5) u>> ecx_33.b & 1
                        
                        if (edi == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_33.b = eax.b
                            eax += 2
                            edi = zx.d(*esi_5) u>> ecx_33.b & 3
                            
                            if (edi == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_33.b = eax.b
                                edi = zx.d((zx.d(*esi_5) u>> ecx_33.b).b)
                                eax += 8
                else
                    edi -= 1
                
                if (result u>= arg4)
                    break
                
                edx_203 = var_14_5 + 1
                result += 1
                var_14_5 = edx_203
                *arg5 = ebx_5.w
                arg5 += 2
                *var_8_5 = ebx_5
                
                if (edx_203 u>= arg2)
                    return result
    case 5
        int32_t edx_252 = 0
        int32_t var_14_6 = 0
        
        if (arg2 u> 0)
            uint32_t edi_31 = 0
            
            do
                int32_t* ecx_39 = (&var_24)[edx_252 & 1]
                int32_t* var_8_6 = ecx_39
                int32_t ebx_6 = *ecx_39
                
                if (edi_31 == 0)
                    if (eax u>= 8)
                        esi_5 += 1
                        eax &= 7
                    
                    ecx_39.b = eax.b
                    eax += 3
                    int32_t edx_255 = zx.d(*esi_5) u>> ecx_39.b & 7
                    
                    if (edx_255 u>= 4)
                        if (edx_255 == 4)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_274 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_274.b s>= 0)
                                ebx_6 += edx_274 << 5
                            else
                                ebx_6 -= (edx_274 & 0x7f) << 5
                        else if (edx_255 == 5)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_280 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_280.b s>= 0)
                                ebx_6 += edx_280 << 6
                            else
                                ebx_6 -= (edx_280 & 0x7f) << 6
                        else if (edx_255 != 6)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 1
                            
                            if ((zx.d(*esi_5) u>> ecx_39.b & 1) != 0)
                                ebx_6 = 0
                            else
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_39.b = eax.b
                                eax += 8
                                uint32_t edx_295 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                                
                                if (edx_295.b s>= 0)
                                    ebx_6 += edx_295 << 9
                                else
                                    ebx_6 -= (edx_295 & 0x7f) << 9
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_286 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_286.b s>= 0)
                                ebx_6 += edx_286 << 7
                            else
                                ebx_6 -= (edx_286 & 0x7f) << 7
                    else if (edx_255 != 0)
                        if (edx_255 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_258 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_258.b s>= 0)
                                ebx_6 += edx_258 << 2
                            else
                                ebx_6 -= (edx_258 & 0x7f) << 2
                        else if (edx_255 != 2)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_268 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_268.b s>= 0)
                                ebx_6 += edx_268 << 4
                            else
                                ebx_6 -= (edx_268 & 0x7f) << 4
                        else
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_39.b = eax.b
                            eax += 8
                            uint32_t edx_263 = zx.d((zx.d(*esi_5) u>> ecx_39.b).b)
                            
                            if (edx_263.b s>= 0)
                                ebx_6 += edx_263 << 3
                            else
                                ebx_6 -= (edx_263 & 0x7f) << 3
                    else if (*(arg6 + 0xc) != edx_255)
                        if (eax u>= 8)
                            esi_5 += 1
                            eax &= 7
                        
                        void* ecx_40
                        ecx_40.b = eax.b
                        eax += 1
                        edi_31 = zx.d(*esi_5) u>> ecx_40.b & 1
                        
                        if (edi_31 == 1)
                            if (eax u>= 8)
                                esi_5 += 1
                                eax &= 7
                            
                            ecx_40.b = eax.b
                            eax += 2
                            edi_31 = zx.d(*esi_5) u>> ecx_40.b & 3
                            
                            if (edi_31 == 3)
                                if (eax u>= 8)
                                    esi_5 += 1
                                    eax &= 7
                                
                                ecx_40.b = eax.b
                                edi_31 = zx.d((zx.d(*esi_5) u>> ecx_40.b).b)
                                eax += 8
                else
                    edi_31 -= 1
                
                if (result u>= arg4)
                    break
                
                int16_t* ecx_41 = arg5
                edx_252 = var_14_6 + 1
                result += 1
                var_14_6 = edx_252
                *ecx_41 = ebx_6.w
                arg5 = &ecx_41[1]
                *var_8_6 = ebx_6
            while (edx_252 u< arg2)

return result
