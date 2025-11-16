// 函数: sub_467eb2
// 地址: 0x467eb2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* result = arg3
uint32_t esi = arg4
int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = arg1
uint32_t ecx
ecx.b = *(edi_1 + 9)
char* i_10 = *edi_1

if (ecx.b u<= 8 && result != 0)
label_467ee8:
    uint32_t ebx_1 = zx.d(edi_1[2].b)
    
    if (ebx_1 == 0)
        if (ecx.b == 2)
            arg4 = arg2
            
            if (i_10 u> 0)
                arg3 = (&i_10[0xffffffff] u>> 2) + 1
                char* i
                
                do
                    uint32_t ecx_16 = zx.d(*arg4)
                    int32_t edx_26 = ecx_16 & 0xc0
                    int32_t ecx_17 = ecx_16 & 3
                    int32_t edx_28 = ecx_16 & 0xc
                    edx_28.b = *(((edx_28 << 2 | edx_28) << 2 | edx_28 s>> 2 | edx_28) + result)
                    int32_t edi_6 = ecx_16 & 0x30
                    int32_t ecx_24
                    ecx_24.b = *((((ecx_17 << 2 | ecx_17) << 2 | ecx_17) << 2 | ecx_17) + result)
                    ecx_24.b u>>= 2
                    edx_28.b &= 0xcf
                    edx_28.b |= ecx_24.b
                    char* ecx_30
                    ecx_30.b = *(((edi_6 s>> 2 | edi_6) s>> 2 | edi_6 << 2 | edi_6) + result)
                    ecx_30.b &= 0xc3
                    edx_28.b u>>= 2
                    edx_28.b |= ecx_30.b
                    int32_t ecx_31
                    ecx_31.b = *((((edx_26 s>> 2 | edx_26) s>> 2 | edx_26) s>> 2 | edx_26) + result)
                    ecx_31.b &= 0xc0
                    edx_28.b u>>= 2
                    edx_28.b |= ecx_31.b
                    ecx = arg4
                    arg4 += 1
                    i = arg3
                    arg3 -= 1
                    *ecx = edx_28.b
                while (i != 1)
                edi_1 = arg1
        
        ecx.b = *(edi_1 + 9)
        
        if (ecx.b == 4)
            char* esi_1 = arg2
            
            if (i_10 u> 0)
                int32_t i_15 = (&i_10[0xffffffff] u>> 1) + 1
                int32_t i_1
                
                do
                    uint32_t ecx_32 = zx.d(*esi_1)
                    int32_t edx_30 = ecx_32 & 0xf0
                    edx_30.b = *((edx_30 s>> 4 | edx_30) + result)
                    int32_t ecx_33 = ecx_32 & 0xf
                    ecx_33.b = *((ecx_33 << 4 | ecx_33) + result)
                    edx_30.b &= 0xf0
                    ecx_33.b u>>= 4
                    edx_30.b |= ecx_33.b
                    *esi_1 = edx_30.b
                    esi_1 = &esi_1[1]
                    i_1 = i_15
                    i_15 -= 1
                while (i_1 != 1)
        else if (ecx.b == 8)
            char* ecx_34 = arg2
            
            if (i_10 u> 0)
                char* i_14 = i_10
                char* i_2
                
                do
                    uint32_t edx_31
                    edx_31.b = result[zx.d(*ecx_34)]
                    *ecx_34 = edx_31.b
                    ecx_34 = &ecx_34[1]
                    i_2 = i_14
                    i_14 -= 1
                while (i_2 != 1)
        else if (ecx.b == 0x10)
            result = arg2
            
            if (i_10 u> 0)
                char* i_3
                
                do
                    ecx.b = arg5
                    ecx.w = *(*(esi + (zx.d(result[1]) u>> ecx.b << 2)) + (zx.d(*result) << 1))
                    *result = ecx:1.b
                    result[1] = ecx.b
                    result = &result[2]
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
    else if (ebx_1 == 2)
        if (ecx.b != 8)
            result = arg2
            
            if (i_10 u> 0)
                arg2 = i_10
                char* i_4
                
                do
                    ecx.b = arg5
                    uint32_t ecx_10
                    ecx_10.w = *(*(esi + (zx.d(result[1]) u>> ecx.b << 2)) + (zx.d(*result) << 1))
                    result[1] = ecx_10.b
                    *result = ecx_10:1.b
                    ecx_10.b = arg5
                    uint32_t ecx_11
                    ecx_11.w =
                        *(*(esi + (zx.d(result[3]) u>> ecx_10.b << 2)) + (zx.d(result[2]) << 1))
                    result[3] = ecx_11.b
                    result[2] = ecx_11:1.b
                    ecx_11.b = arg5
                    ecx.w = *(*(esi + (zx.d(result[5]) u>> ecx_11.b << 2)) + (zx.d(result[4]) << 1))
                    result[4] = ecx:1.b
                    result[5] = ecx.b
                    result = &result[6]
                    i_4 = arg2
                    arg2 -= 1
                while (i_4 != 1)
        else
            char* ecx_7 = arg2
            
            if (i_10 u> 0)
                char* i_13 = i_10
                char* i_5
                
                do
                    uint32_t edx_13
                    edx_13.b = result[zx.d(*ecx_7)]
                    *ecx_7 = edx_13.b
                    uint32_t edx_14
                    edx_14.b = result[zx.d(ecx_7[1])]
                    ecx_7[1] = edx_14.b
                    uint32_t edx_15
                    edx_15.b = result[zx.d(ecx_7[2])]
                    ecx_7[2] = edx_15.b
                    ecx_7 = &ecx_7[3]
                    i_5 = i_13
                    i_13 -= 1
                while (i_5 != 1)
    else if (ebx_1 == 4)
        if (ecx.b != 8)
            result = arg2
            
            if (i_10 u> 0)
                char* i_6
                
                do
                    ecx.b = arg5
                    ecx.w = *(*(esi + (zx.d(result[1]) u>> ecx.b << 2)) + (zx.d(*result) << 1))
                    *result = ecx:1.b
                    result[1] = ecx.b
                    result = &result[4]
                    i_6 = i_10
                    i_10 -= 1
                while (i_6 != 1)
        else
            char* ecx_6 = arg2
            
            if (i_10 u> 0)
                char* i_12 = i_10
                char* i_7
                
                do
                    uint32_t edx_12
                    edx_12.b = result[zx.d(*ecx_6)]
                    *ecx_6 = edx_12.b
                    ecx_6 = &ecx_6[2]
                    i_7 = i_12
                    i_12 -= 1
                while (i_7 != 1)
    else if (ebx_1 == 6)
        if (ecx.b != 8)
            result = arg2
            
            if (i_10 u> 0)
                arg2 = i_10
                char* i_8
                
                do
                    ecx.b = arg5
                    uint32_t ecx_4
                    ecx_4.w = *(*(esi + (zx.d(result[1]) u>> ecx.b << 2)) + (zx.d(*result) << 1))
                    result[1] = ecx_4.b
                    *result = ecx_4:1.b
                    ecx_4.b = arg5
                    uint32_t ecx_5
                    ecx_5.w =
                        *(*(esi + (zx.d(result[3]) u>> ecx_4.b << 2)) + (zx.d(result[2]) << 1))
                    result[3] = ecx_5.b
                    result[2] = ecx_5:1.b
                    ecx_5.b = arg5
                    ecx.w = *(*(esi + (zx.d(result[5]) u>> ecx_5.b << 2)) + (zx.d(result[4]) << 1))
                    result[4] = ecx:1.b
                    result[5] = ecx.b
                    result = &result[8]
                    i_8 = arg2
                    arg2 -= 1
                while (i_8 != 1)
        else
            char* ecx_1 = arg2
            
            if (i_10 u> 0)
                char* i_11 = i_10
                char* i_9
                
                do
                    uint32_t edx
                    edx.b = result[zx.d(*ecx_1)]
                    *ecx_1 = edx.b
                    uint32_t edx_1
                    edx_1.b = result[zx.d(ecx_1[1])]
                    ecx_1[1] = edx_1.b
                    uint32_t edx_2
                    edx_2.b = result[zx.d(ecx_1[2])]
                    ecx_1[2] = edx_2.b
                    ecx_1 = &ecx_1[4]
                    i_9 = i_11
                    i_11 -= 1
                while (i_9 != 1)
else if (ecx.b == 0x10 && esi != 0)
    goto label_467ee8

return result
