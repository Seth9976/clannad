// 函数: sub_5d72d0
// 地址: 0x5d72d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg4[2]
int32_t ebx = *arg4
int32_t esi = arg4[1]
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi - ebx)
int32_t var_10 = 0
int32_t ebx_1 = arg4[3]
int32_t ecx_1 = arg2
int32_t var_8 = ((eax_2 - edx) s>> 1) + ebx
int32_t var_14 = 0
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(ebx_1 - esi)
int32_t var_c = ((eax_8 - edx_1) s>> 1) + esi
int32_t var_20 = 0x3e8
int32_t var_24 = 0
char var_18 = 0xff
void* eax_11
void* edx_2

if (ecx_1 == 6)
    edx_2 = data_bac4a0
    int32_t ecx_2
    ecx_2.b = ebx_1 s> *(edx_2 + 0xc) - esi
    ecx_1 = ecx_2 + 2
else if (ecx_1 != 7)
    if (ecx_1 == 8)
        void* eax_14 = data_bac4a0
        int32_t edx_4 = *(eax_14 + 0xc) - esi
        eax_11 = *(eax_14 + 8) - ebx
        int32_t esi_1
        
        if (ebx_1 s> edx_4)
            esi_1 = 3
        else
            esi_1 = ecx_1 - 6
            edx_4 = ebx_1
        
        if (edi s> eax_11)
            ecx_1 = 5
        else
            ecx_1 = 4
            eax_11 = edi
        
        if (edx_4 s<= eax_11)
            ecx_1 = esi_1
    
    edx_2 = data_bac4a0
else
    edx_2 = data_bac4a0
    int32_t ecx_3
    ecx_3.b = edi s> *(edx_2 + 8) - ebx
    ecx_1 = ecx_3 + 4

double xmm4 = 255.0
int32_t* ebx_2 = nullptr
eax_11.b = 0
arg4 = nullptr
int32_t esi_2 = 0
int32_t edi_1 = 0

if (ecx_1 == 9)
    ebx_2 = 1
label_5d73cd:
    arg4 = ebx_2
    goto label_5d73d0

if (ecx_1 == 0xa)
    ebx_2 = ecx_1 - 8
    arg4 = 1
label_5d73d0:
    esi_2 = 0
    arg2 = 0
    goto label_5d73d5

int32_t edx_5

if (ecx_1 != 0xb)
    switch (ecx_1)
        case 0xc
            ebx_2 = ecx_1 - 0xb
            arg4 = 2
            goto label_5d73d0
        case 0xd
            ebx_2 = ecx_1 - 0xb
            goto label_5d73cd
        case 0xe
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0
            goto label_5d73d5
        case 0xf
            esi_2 = 0
            ebx_2 = ecx_1 - 0xe
            arg4 = nullptr
            arg2 = 0
            goto label_5d73d5
        case 0x10
            esi_2 = 0
            ebx_2 = ecx_1 - 0xe
            arg4 = nullptr
            arg2 = 0
            goto label_5d73d5
        case 0x11
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0
            edi_1 = ecx_1 - 0x10
            goto label_5d73d7
        case 0x12
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0
            edi_1 = ecx_1 - 0x10
            goto label_5d73d7
        case 0x13
            arg4 = nullptr
            ebx_2 = ecx_1 - 0x11
            edi_1 = 0
            esi_2 = ecx_1 - 0x12
            arg2 = 0
            goto label_5d73d7
        case 0x14
            arg4 = nullptr
            ebx_2 = 2
            edi_1 = 0
            esi_2 = 2
            arg2 = 0
            goto label_5d73d7
        case 0x15
            ebx_2 = 2
            arg2 = 0
            esi_2 = 1
            arg4 = 2
            edi_1 = 1
            goto label_5d73d7
        case 0x16
            ebx_2 = 2
            arg2 = 0
            esi_2 = ecx_1 - 0x15
            arg4 = 2
            edi_1 = 2
            goto label_5d73d7
        case 0x17
            ebx_2 = 2
            arg2 = 0
            esi_2 = 2
            arg4 = 2
            edi_1 = ecx_1 - 0x16
            goto label_5d73d7
        case 0x18
            ebx_2 = 2
            arg2 = 0
            esi_2 = 2
            arg4 = 2
            edi_1 = 2
            goto label_5d73d7
        case 0x19
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0
            edi_1 = ecx_1 - 0x16
            goto label_5d73d7
        case 0x1a
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0
            edi_1 = ecx_1 - 0x16
            goto label_5d73d7
        case 0x1b
            arg4 = nullptr
            ebx_2 = ecx_1 - 0x19
            edi_1 = 0
            esi_2 = ecx_1 - 0x18
            arg2 = 0
            goto label_5d73d7
        case 0x1c
            arg4 = nullptr
            ebx_2 = ecx_1 - 0x1a
            eax_11.b = 1
            esi_2 = ecx_1 - 0x18
            edi_1 = 0
    
    arg2 = 0
    
    switch (ecx_1)
        case 0x1d
            ebx_2 = 2
            arg2 = 0xfffffffc
            esi_2 = 0
            arg4 = 2
            goto label_5d73d5
        case 0x1e
            ebx_2 = 2
            arg2 = 4
            esi_2 = 0
            arg4 = 2
            goto label_5d73d5
        case 0x1f
            ebx_2 = 2
            arg2 = 0xfffffff8
            esi_2 = 0
            arg4 = 2
            goto label_5d73d5
        case 0x20
            ebx_2 = 2
            arg2 = 8
            esi_2 = 0
            arg4 = 2
            goto label_5d73d5
        case 0x21
            ebx_2 = 1
            arg2 = 0xfffffffc
            esi_2 = 0
            arg4 = 1
            goto label_5d73d5
        case 0x22
            ebx_2 = 1
            arg2 = 4
            esi_2 = 0
            arg4 = 1
            goto label_5d73d5
        case 0x23
            ebx_2 = 1
            arg2 = 0xfffffff8
            esi_2 = 0
            arg4 = 1
            goto label_5d73d5
        case 0x24
            ebx_2 = 1
            arg2 = 8
            esi_2 = 0
            arg4 = 1
            goto label_5d73d5
        case 0x25
            esi_2 = 0
            arg2 = 0xfffffffc
            ebx_2 = ecx_1 - 0x23
            arg4 = nullptr
            goto label_5d73d5
        case 0x26
            esi_2 = 0
            arg2 = 4
            ebx_2 = ecx_1 - 0x24
            arg4 = nullptr
            goto label_5d73d5
        case 0x27
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0xfffffffc
            goto label_5d73d5
        case 0x28
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 4
            goto label_5d73d5
        case 0x29
            esi_2 = 0
            arg2 = 0xfffffffe
            ebx_2 = ecx_1 - 0x27
            arg4 = nullptr
            goto label_5d73d5
        case 0x2a
            ebx_2 = 2
            esi_2 = 0
            arg4 = nullptr
            arg2 = 2
            goto label_5d73d5
        case 0x2b
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0xfffffffe
            goto label_5d73d5
        case 0x2c
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 2
            goto label_5d73d5
        case 0x2d
            esi_2 = 0
            arg2 = 0xffffffff
            ebx_2 = ecx_1 - 0x2b
            arg4 = nullptr
            goto label_5d73d5
        case 0x2e
            esi_2 = 0
            arg2 = 1
            ebx_2 = ecx_1 - 0x2c
            arg4 = nullptr
            goto label_5d73d5
        case 0x2f
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 0xffffffff
            goto label_5d73d5
        case 0x30
            ebx_2 = nullptr
            arg4 = 2
            esi_2 = 0
            arg2 = 1
            goto label_5d73d5
    
    if (ecx_1 != 0)
        if (ecx_1 != 1)
            int32_t var_48_1
            int32_t eax_18
            uint64_t xmm3_1
            
            if (ecx_1 == 2)
                eax_18 = neg.d(*(arg5 + 0xc))
                
                if (arg1 != 0)
                    int32_t var_40_1 = 0
                    int32_t var_44_1 = 0xff
                    var_48_1 = eax_18
                label_5d7808:
                    xmm4 = 255.0
                    var_14 = sub_5ad8c0(eax_18, 0, arg3, var_48_1, 0xff, 0)
                    goto label_5d73d7
                
                xmm3_1 = zx.q(eax_18)
            label_5d7822:
                edx_5 = arg3
                double xmm3_2 = _mm_cvtepi32_pd(xmm3_1)
                double xmm1_2 = _mm_cvtepi32_pd(zx.q(edx_5))
                
                if (not(0 f<= xmm1_2))
                    xmm1_2 = (zx.o(0)).q
                else if (not(xmm1_2 <= xmm4))
                    xmm1_2 = xmm4
                
                double xmm1_3 = xmm1_2 - 0.0
                var_14 = int.d(xmm1_3 * xmm1_3 * (0.0 - xmm3_2) / xmm4 / xmm4 + xmm3_2)
                goto label_5d73da
            
            if (ecx_1 == 3)
                eax_18 = arg5
                ecx_1 = *(edx_2 + 0xc) - *(eax_18 + 4)
                
                if (arg1 == 0)
                    xmm3_1 = zx.q(ecx_1)
                    goto label_5d7822
                
                int32_t var_40_2 = 0
                int32_t var_44_2 = 0xff
                var_48_1 = ecx_1
                goto label_5d7808
            
            int32_t var_48_2
            int32_t eax_23
            
            if (ecx_1 == 4)
                eax_23 = neg.d(*(arg5 + 8))
                
                if (arg1 != 0)
                    int32_t var_40_3 = 0
                    int32_t var_44_3 = 0xff
                    var_48_2 = eax_23
                label_5d78c1:
                    xmm4 = 255.0
                    var_10 = sub_5ad8c0(eax_23, 0, arg3, var_48_2, 0xff, 0)
                    goto label_5d73d7
                
                edx_5 = arg3
                double xmm3_4 = _mm_cvtepi32_pd(zx.q(eax_23))
                double xmm1_10 = _mm_cvtepi32_pd(zx.q(edx_5))
                
                if (not(0 f<= xmm1_10))
                    xmm1_10 = (zx.o(0)).q
                else if (not(xmm1_10 <= xmm4))
                    xmm1_10 = xmm4
                
                double xmm1_11 = xmm1_10 - 0.0
                var_10 = int.d(xmm1_11 * xmm1_11 * (0.0 - xmm3_4) / xmm4 / xmm4 + xmm3_4)
                goto label_5d73da
            
            if (ecx_1 == 5)
                eax_23 = arg5
                ecx_1 = *(edx_2 + 8) - *eax_23
                
                if (arg1 != 0)
                    int32_t var_40_4 = 0
                    int32_t var_44_4 = 0xff
                    var_48_2 = ecx_1
                    goto label_5d78c1
                
                edx_5 = arg3
                double xmm3_6 = _mm_cvtepi32_pd(zx.q(ecx_1))
                double xmm1_18 = _mm_cvtepi32_pd(zx.q(edx_5))
                
                if (not(0 f<= xmm1_18))
                    xmm1_18 = (zx.o(0)).q
                else if (not(xmm1_18 <= xmm4))
                    xmm1_18 = xmm4
                
                double xmm1_19 = xmm1_18 - 0.0
                var_10 = int.d((0.0 - xmm3_6) * xmm1_19 * xmm1_19 / xmm4 / xmm4 + xmm3_6)
                goto label_5d73da
            
            if (eax_11.b != 0)
                goto label_5d73d7
            
            if (ecx_1 == 0x63)
                var_10 = (0xff - arg3) * 0x320 s/ 0xff
        else
            var_18 = arg3.b
else
    ebx_2 = nullptr
    arg4 = 1
    esi_2 = 0
    arg2 = 0
label_5d73d5:
    edi_1 = 0
label_5d73d7:
    edx_5 = arg3
label_5d73da:
    
    if (edx_5 s>= 0xe0)
        var_18.d = 0xff
    else if (edx_5 s> 0)
        var_18.d = edx_5 * 0xff s/ 0xe0
    else
        var_18.d = 0
double xmm3_7 = 1000.0
int32_t ebx_3

if (ebx_2 == 0)
    ebx_3 = arg3
    ecx_1.b = arg1
else
    if (esi_2 == 0)
        var_c = var_c
    else if (esi_2 == 1)
        var_c = esi
    else if (esi_2 == 2)
        var_c = ebx_1
    else if (esi_2 == 3)
        int32_t eax_38
        int32_t edx_14
        edx_14:eax_38 = sx.q(*(data_bac4a0 + 0xc))
        var_c = neg.d(((edx_14 & 0xf) + eax_38) s>> 4)
    else if (esi_2 == 4)
        int32_t ecx_8 = *(data_bac4a0 + 0xc)
        int32_t eax_40
        int32_t edx_18
        edx_18:eax_40 = sx.q(ecx_8)
        var_c = (((edx_18 & 0xf) + eax_40) s>> 4) + ecx_8
    
    int32_t eax_41 = 0
    ebx_3 = arg3
    
    if (ebx_2 == 1)
        eax_41 = 0xbb8
    
    ecx_1.b = arg1
    double xmm5_2 = _mm_cvtepi32_pd(zx.q(eax_41))
    
    if (ecx_1.b == 0)
        int64_t xmm1_27 = _mm_cvtepi32_pd(zx.q(ebx_3))
        
        if (not(0 f<= xmm1_27))
            xmm1_27 = (zx.o(0)).q
        else if (not(xmm1_27 f<= xmm4))
            xmm1_27 = xmm4
        
        double xmm1_28 = xmm1_27 f- 0.0
        var_20 = int.d((xmm3_7 - xmm5_2) * xmm1_28 * xmm1_28 / xmm4 / xmm4 + xmm5_2)
    else
        int64_t xmm0_9 = _mm_cvtepi32_pd(zx.q(ebx_3))
        
        if (not(0 f<= xmm0_9))
            xmm0_9 = (zx.o(0)).q
        else if (not(xmm0_9 f<= xmm4))
            xmm0_9 = xmm4
        
        double xmm0_10 = xmm0_9 f- xmm4
        var_20 = int.d(xmm3_7 - (xmm3_7 - xmm5_2) * xmm0_10 * xmm0_10 / xmm4 / xmm4)

int32_t edx_29

if (arg4 == 0)
    edx_29 = 0x3e8
else
    if (edi_1 == 0)
        ecx_1.b = arg1
    else if (edi_1 == 1)
        var_8 = ebx
    else if (edi_1 == 2)
        var_8 = edi
    else if (edi_1 == 3)
        int32_t eax_48
        int32_t edx_22
        edx_22:eax_48 = sx.q(*(data_bac4a0 + 8))
        var_8 = neg.d(((edx_22 & 0xf) + eax_48) s>> 4)
        ecx_1.b = arg1
    else if (edi_1 == 4)
        ecx_1 = *(data_bac4a0 + 8)
        int32_t eax_51
        int32_t edx_24
        edx_24:eax_51 = sx.q(ecx_1)
        var_8 = (((edx_24 & 0xf) + eax_51) s>> 4) + ecx_1
        ecx_1.b = arg1
    
    int32_t eax_52 = 0
    
    if (arg4 == 1)
        eax_52 = 0xbb8
    
    if (ecx_1.b == 0)
        double xmm0_26 = _mm_cvtepi32_pd(zx.q(ebx_3))
        double xmm1_35 = _mm_cvtepi32_pd(zx.q(eax_52))
        
        if (not(0.0 <= xmm0_26))
            xmm0_26 = (zx.o(0)).q
        else if (not(xmm0_26 <= xmm4))
            xmm0_26 = xmm4
        
        double xmm0_27 = xmm0_26 - 0.0
        edx_29 = int.d((xmm3_7 - xmm1_35) * xmm0_27 * xmm0_27 / xmm4 / xmm4 + xmm1_35)
    else
        double xmm1_31 = _mm_cvtepi32_pd(zx.q(ebx_3))
        double xmm5_4 = _mm_cvtepi32_pd(zx.q(eax_52))
        
        if (not(0.0 <= xmm1_31))
            xmm1_31 = (zx.o(0)).q
        else if (not(xmm1_31 <= xmm4))
            xmm1_31 = xmm4
        
        double xmm1_32 = xmm1_31 - xmm4
        edx_29 = int.d(xmm3_7 - (xmm3_7 - xmm5_4) * xmm1_32 * xmm1_32 / xmm4 / xmm4)

if (arg2 != 0)
    int32_t eax_54 = arg2 * 0x384
    double xmm2_1
    
    if (ecx_1.b == 0)
        double xmm0_34 = _mm_cvtepi32_pd(zx.q(ebx_3))
        double xmm1_41 = _mm_cvtepi32_pd(zx.q(eax_54))
        
        if (not(0.0 <= xmm0_34))
            xmm0_34 = (zx.o(0)).q
        else if (not(xmm0_34 <= xmm4))
            xmm0_34 = xmm4
        
        double xmm0_35 = xmm0_34 - 0.0
        xmm2_1 = (0.0 - xmm1_41) * xmm0_35 * xmm0_35 / xmm4 / xmm4 + xmm1_41
    else
        double xmm1_37 = _mm_cvtepi32_pd(zx.q(ebx_3))
        double xmm3_15 = _mm_cvtepi32_pd(zx.q(eax_54))
        
        if (not(0.0 <= xmm1_37))
            xmm1_37 = (zx.o(0)).q
        else if (not(xmm1_37 <= xmm4))
            xmm1_37 = xmm4
        
        double xmm1_38 = xmm1_37 - xmm4
        xmm2_1 = 0.0 - (0.0 - xmm3_15) * xmm1_38 * xmm1_38 / xmm4 / xmm4
    
    var_24 = int.d(xmm2_1)

*arg6 += var_10
arg6[1] += var_14
uint32_t esi_4 = zx.d(*arg10)
*arg7 = var_8
arg7[1] = var_c
*arg8 = edx_29
arg8[1] = var_20
*arg9 = var_24
char result = (esi_4 * zx.d(var_18) s/ 0xff).b
*arg10 = result
return result
