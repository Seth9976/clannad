// 函数: sub_41d1a3
// 地址: 0x41d1a3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_80 = edi
sub_41d0c1(arg1)
int32_t var_74
(*(*arg3 + 0x30))(arg3, &var_74)
int32_t var_5c
int32_t var_58
int32_t var_44
int32_t var_40
int32_t var_3c
int32_t var_38
int32_t var_1c_1
int32_t var_8_1

if (arg5 == 0)
    var_3c = var_5c
    var_38 = var_58
    var_44 = 0
    var_40 = 0
    var_8_1 = 0
    var_1c_1 = not.d(arg7) & 1
else
    var_44 = *arg5
    int32_t* edi_1 = &var_40
    void* esi_1 = &arg5[1]
    *edi_1 = *esi_1
    void* edi_2 = &edi_1[1]
    void* esi_2 = esi_1 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)
    
    if (var_44 s< 0 || var_3c u> var_5c || var_44 s> var_3c || var_40 s< 0 || var_38 u> var_58
            || var_40 s> var_38)
        return 0x8876086c
    
    if (var_44 == 0 && var_3c == var_5c && var_40 == 0)
        var_8_1 = 0
    
    if (var_44 != 0 || var_3c != var_5c || var_40 != 0 || var_38 != var_58)
        var_8_1 = 1
    
    if ((arg7.b & 1) != 0 || var_8_1 != 0)
        var_1c_1 = 0
    else
        var_1c_1 = 1

int32_t eax_8 = arg7 & 0x10000
int32_t* var_14

if (eax_8 == 0)
    var_14 = arg3
else
    int32_t eax_9 = var_74
    int32_t edx_2 = var_58
    int32_t var_10_1 = 0
    
    if (eax_9 == 0x31545844 || eax_9 == 0x32545844 || eax_9 == 0x33545844 || eax_9 == 0x34545844
            || eax_9 == 0x35545844)
        int32_t eax_11 = edx_2 | var_5c
        
        if ((eax_11.b & 3) != 0)
            do
                var_10_1 += 1
            while (((eax_11 << var_10_1.b).b & 3) != 0)
    
    (*(*arg3 + 0xc))(arg3, &arg1[0x10])
    int32_t var_68
    int32_t ecx_2
    ecx_2.b = var_68 == 3
    int32_t* eax_13 = *(arg1 + 0x10)
    int32_t eax_14 = (*(*eax_13 + 0x5c))(eax_13, var_5c << var_10_1.b, edx_2 << var_10_1.b, 
        var_10_1 + 1, 0, var_74, ecx_2 + 2, &arg1[0xc], 0)
    int32_t var_c_1 = eax_14
    int32_t eax_16
    
    if (eax_14 s>= 0)
        int32_t* eax_15 = *(arg1 + 0xc)
        eax_16 = (*(*eax_15 + 0x48))(eax_15, var_10_1, &arg1[8])
        var_c_1 = eax_16
    
    if (eax_14 s< 0 || eax_16 s< 0)
        int32_t* eax_29 = *(arg1 + 8)
        
        if (eax_29 != 0)
            (*(*eax_29 + 8))(eax_29)
            *(arg1 + 8) = 0
        
    label_41d3c5:
        int32_t* eax_26 = *(arg1 + 0xc)
        
        if (eax_26 != 0)
            (*(*eax_26 + 8))(eax_26)
            *(arg1 + 0xc) = 0
        
        int32_t* eax_27 = *(arg1 + 0x10)
        
        if (eax_27 != 0)
            (*(*eax_27 + 8))(eax_27)
            *(arg1 + 0x10) = 0
        
        return var_c_1
    
    if (var_1c_1 != 0)
        var_14 = *(arg1 + 8)
    else
        var_14 = nullptr
        sub_416380(1)
        var_c_1 = sub_41cfe2(arg3, *(arg1 + 8))
        sub_416380(0)
        
        if (var_c_1 s>= 0)
            var_14 = *(arg1 + 8)
        else
            if (var_10_1 != 0)
                goto label_41d3b6
            
            int32_t* eax_18 = *(arg1 + 0x10)
            int32_t eax_19 = (*(*eax_18 + 0x70))(eax_18, var_5c, edx_2, var_74, 0, 0, 1, &var_14, 0)
            var_c_1 = eax_19
            
            if (eax_19 s< 0)
                goto label_41d3b6
            
            int32_t* eax_20 = *(arg1 + 0x10)
            int32_t eax_21 = (*(*eax_20 + 0x88))(eax_20, arg3, 0, var_14, 0, 0)
            var_c_1 = eax_21
            
            if (eax_21 s< 0)
                int32_t* eax_22 = var_14
                (*(*eax_22 + 8))(eax_22)
            label_41d3b6:
                int32_t* eax_25 = *(arg1 + 8)
                
                if (eax_25 != 0)
                    (*(*eax_25 + 8))(eax_25)
                    *(arg1 + 8) = 0
                
                goto label_41d3c5
            
            var_c_1 = sub_41cfe2(var_14, *(arg1 + 8))
            int32_t* eax_24 = var_14
            (*(*eax_24 + 8))(eax_24)
            
            if (var_c_1 s< 0)
                goto label_41d3b6
            
            var_14 = *(arg1 + 8)

int32_t ebx_6 = ((zx.d(arg7.b) & 1) | 0x80) << 4
char var_6b
int32_t var_54
int32_t var_50
int32_t var_34

if (var_1c_1 == 0 || eax_8 != 0 || (var_6b & 2) == 0)
label_41d492:
    
    if (var_8_1 != 0)
        int32_t eax_35 = var_74
        
        if (eax_35 s<= 0x34545844)
            if (eax_35 == 0x34545844 || eax_35 == 0x31545844 || eax_35 == 0x32545844)
                goto label_41d4db
            
            if (eax_35 == 0x32595559)
                goto label_41d54b
            
            if (eax_35 != 0x33545844)
                goto label_41d53f
            
            goto label_41d4db
        
        int32_t var_48
        bool cond:11_1
        
        if (eax_35 == 0x35545844)
        label_41d4db:
            int32_t eax_38 = (var_3c + 3) & 0xfffffffc
            int32_t edx_8 = var_44 & 0xfffffffc
            int32_t esi_9 = var_40 & 0xfffffffc
            int32_t ecx_19 = (var_38 + 3) & 0xfffffffc
            var_54 = edx_8
            int32_t var_4c_1 = eax_38
            var_50 = esi_9
            var_48 = ecx_19
            
            if (eax_38 u> var_5c)
                eax_38 = var_5c
                int32_t var_4c_2 = eax_38
            
            if (ecx_19 u> var_58)
                ecx_19 = var_58
                var_48 = ecx_19
            
            if (edx_8 == 0 && eax_38 == var_5c && esi_9 == 0)
                cond:11_1 = ecx_19 != var_58
                goto label_41d515
            
            var_8_1 = 1
        else if (eax_35 == 0x42475247 || eax_35 == 0x47424752 || eax_35 == 0x59565955)
        label_41d54b:
            int32_t edx_9 = var_40
            int32_t ecx_21 = var_44 & 0xfffffffe
            int32_t eax_41 = (var_3c + 1) & 0xfffffffe
            var_54 = ecx_21
            int32_t var_4c_3 = eax_41
            var_50 = edx_9
            var_48 = var_38
            
            if (eax_41 u> var_5c)
                eax_41 = var_5c
                int32_t var_4c_4 = eax_41
            
            if (ecx_21 != 0 || eax_41 != var_5c || edx_9 != 0)
                var_8_1 = 1
            else
                cond:11_1 = var_38 != var_58
            label_41d515:
                
                var_8_1 = cond:11_1 ? 1 : 0
        else
        label_41d53f:
            var_54 = var_44
            int32_t* edi_13 = &var_50
            int32_t* esi_10 = &var_40
            *edi_13 = *esi_10
            void* edi_14 = &edi_13[1]
            void* esi_11 = &esi_10[1]
            *edi_14 = *esi_11
            *(edi_14 + 4) = *(esi_11 + 4)
    
    if (eax_8 == 0)
        goto label_41d590
    
    int32_t* eax_46 = var_14
    int32_t edx_15 = neg.d(var_8_1)
    int32_t eax_2 =
        (*(*eax_46 + 0x34))(eax_46, &var_34, sbb.d(edx_15, edx_15, var_8_1 != 0) & &var_54, ebx_6)
    
    if (eax_2 s< 0)
        return eax_2
else
    if ((arg7:2.b & 2) == 0)
        sub_416380(1)
        int32_t* var_20
        
        if ((*(*arg3 + 0x2c))(arg3, 0xac3954, &var_20) s>= 0)
            int32_t* eax_32 = var_20
            
            if ((*(*eax_32 + 0x34))(eax_32) == 1)
                ebx_6 |= 0x2000
                var_8_1 = 0
            
            int32_t* eax_34 = var_20
            
            if (eax_34 != 0)
                (*(*eax_34 + 8))(eax_34)
                var_20 = nullptr
        
        sub_416380(0)
        goto label_41d492
    
    ebx_6 |= 0x2000
    var_8_1 = 0
label_41d590:
    sub_416380(1)
    int32_t* eax_42 = var_14
    int32_t edx_11 = neg.d(var_8_1)
    int32_t eax_43 =
        (*(*eax_42 + 0x34))(eax_42, &var_34, sbb.d(edx_11, edx_11, var_8_1 != 0) & &var_54, ebx_6)
    sub_416380(0)
    
    if (eax_43 s< 0)
        return sub_41d1a3(arg2, arg3, arg4, arg5, arg6, arg7 | 0x10000)

if (var_8_1 != 0)
    int32_t eax_47 = var_54
    var_44 -= eax_47
    int32_t var_3c_1 = var_3c - eax_47
    int32_t eax_48 = var_50
    var_40 -= eax_48
    int32_t var_38_1 = var_38 - eax_48

int32_t var_30
*arg2 = var_30
arg2[1] = var_74
arg2[2] = var_34
arg2[6] = var_5c
arg2[7] = var_58
arg2[0xa] = var_44
void* edi_18 = &arg2[0xb]
int32_t* esi_16 = &var_40
arg2[9] = 1
*edi_18 = *esi_16
void* edi_19 = edi_18 + 4
void* esi_17 = &esi_16[1]
arg2[0xf] = 1
arg2[0x10] = 1
arg2[0x13] = arg6
*edi_19 = *esi_17
arg2[3] = 0
arg2[4] = 0
arg2[5] = 0
arg2[8] = 0
arg2[0xe] = 0
arg2[0x11] = 0
arg2[0x12] = 0
arg2[0x14] = arg4
int32_t* ecx_32 = arg1
*(edi_19 + 4) = *(esi_17 + 4)
ecx_32[1] = arg3
*ecx_32 = arg7
(*(*arg3 + 4))(arg3)
return 0
