// 函数: sub_4530db
// 地址: 0x4530db
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
void* arg_8
int32_t* ebx = arg_8
int32_t* arg_c
int32_t* esi = arg_c
int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = arg2
var_c = arg1
var_8 = nullptr
edi_1[7] = 0
edi_1[6] = 0

if (ebx != 0)
    int32_t eax_2 = (*(*ebx + 0x10))(ebx)
    
    if (*esi + 1 u<= eax_2)
        edi_1[0xb] = *((*(*ebx + 0xc))(ebx) + (*esi << 2))

*esi += 1

if (ebx != 0)
    int32_t eax_7 = (*(*ebx + 0x10))(ebx)
    
    if (*esi + 1 u<= eax_7)
        edi_1[0xc] = *((*(*ebx + 0xc))(ebx) + (*esi << 2))

*esi += 1

if (ebx != 0)
    int32_t eax_12 = (*(*ebx + 0x10))(ebx)
    
    if (*esi + 1 u<= eax_12)
        edi_1[0xa] = *((*(*ebx + 0xc))(ebx) + (*esi << 2))

*esi += 1

if (ebx != 0)
    int32_t eax_17 = (*(*ebx + 0x10))(ebx)
    
    if (*esi + 1 u<= eax_17)
        edi_1[0xe] = *((*(*ebx + 0xc))(ebx) + (*esi << 2))

*esi += 1

if (ebx != 0 && (*(*ebx + 0x10))(ebx) u>= *esi)
    bool cond:1_1 = edi_1[0xe] u<= 0
    arg2 = nullptr
    arg_c = edi_1
    arg_8 = nullptr
    
    if (not(cond:1_1))
        while (true)
            int32_t* eax_23 = sub_745f3f(0x50)
            
            if (eax_23 == 0)
                var_8 = nullptr
            else
                var_8 = sub_44cb3f(eax_23)
            
            if (var_8 == 0)
                return 0x8007000e
            
            int32_t* var_1c_10 = esi
            int32_t* var_20_1 = ebx
            int32_t* eax_25 = sub_45222f(var_c, var_8)
            arg2 = eax_25
            
            if (eax_25 s< 0)
                break
            
            int32_t* eax_26 = var_8
            int32_t* ecx_15 = arg_c
            var_8 = nullptr
            arg_8 += 1
            ecx_15[0xf] = eax_26
            arg_c = eax_26
            
            if (arg_8 u>= edi_1[0xe])
                goto label_453203
        
        goto label_4532b0
    
label_453203:
    int32_t* esi_1 = var_c
    esi_1[0x2a] += 1
    void* eax_28 = esi_1[8]
    int32_t* ecx_16 = edi_1[0xb]
    
    if (eax_28 + ecx_16 + 0x14 u<= esi_1[7] + eax_28)
        int32_t ebx_2 = *(eax_28 + ecx_16 + 4)
        int32_t edx_3 = *(eax_28 + ecx_16 + 0x10)
        
        if (ebx_2 u<= 1)
            int32_t eax_34 = 1
            
            if (edx_3 u> 1)
                eax_34 = edx_3
            
            esi_1[0x4a] += eax_34 << 4
        label_4532b0:
            int32_t* ecx_19 = var_8
            
            if (ecx_19 != 0)
                sub_44cbb2(ecx_19, 1)
        else if (ebx_2 u<= 3)
            int32_t eax_32 = 1
            
            if (edx_3 u> 1)
                eax_32 = edx_3
            
            esi_1[0x49] += eax_32 << 6
        else if (ebx_2 == 5)
            int32_t* edi_2 = edi_1[0xc]
            var_8 = ecx_16
            arg_8 = eax_28 + edi_2
            arg_c = ecx_16 + eax_28
            var_c = edi_2
            int32_t* eax_30 = sub_44d0fb(esi_1, &arg_c, &arg_8, 0)
            arg2 = eax_30
            
            if (eax_30 s>= 0)
                int32_t eax_31 = sub_443af4(esi_1[8], &var_8, &var_c)
                esi_1[0x4b] += eax_31
    
    return arg2

return 0x80004005
