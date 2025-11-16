// 函数: sub_4fcca0
// 地址: 0x4fcca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_124
int32_t eax_1 = __security_cookie ^ &var_124
int32_t eax_2 = arg4
int32_t ebx = 0xffffffff
int32_t var_11c = 1
int32_t var_120 = 0xffffffff

if (eax_2 == 0xffffffff)
    eax_2 = data_8c4cf4

char* esi = arg3
int32_t eax_3 = arg5

if (eax_3 == 0xffffffff)
    eax_3 = data_8c4cf8

int32_t eax_4 = arg6

if (eax_4 == 0xffffffff)
    eax_4 = data_8c4cfc

int32_t eax_5 = arg7
int32_t var_118 = 0xffffffff

if (eax_5 == 0xffffffff)
    eax_5 = data_8c4d00

arg7 = eax_5

if (esi == 0)
    esi = nullptr
else
    eax_5.b = *esi
    
    if (eax_5.b == 0)
        esi = nullptr
    else if (eax_5.b != 0x3f)
        sub_542740(eax_5.b, &var_118, arg3, 1, 0)
        ebx = var_118
        var_120 = ebx
    else if (esi[1] != eax_5.b || esi[2] != eax_5.b || data_703814 == 0)
        esi = nullptr
    else
        ebx = data_703838
        esi = &data_703814
        var_120 = ebx

int32_t eax_6 = arg2[8]

if (eax_6 s> 0xb)
    arg2[8] = 0xb
else if (eax_6 s< 0xffffffff)
    arg2[8] = 0xffffffff

if (esi == 0 || arg8 == 0)
label_4fceac:
    
    if (data_1af1724 == 0)
        int32_t edi_2 = data_70300c - 1
        int32_t ebx_2 = data_7030dc - 1
        sub_42c150(sub_49c260(1), esi, 1, var_120, nullptr, 0, eax_2, eax_3, eax_4, arg7)
        sub_42a500(1)
        
        if (esi == 0)
            data_13926d4 = 0
            data_13926d0 = 0xffffffff
            data_703814 = 0
            data_703838 = 0xffffffff
        else
            sub_4cfd70(&data_13926d4, esi)
            data_13926d0 = var_120
            sub_4cfd70(&data_703814, esi)
            data_703838 = var_120
        
        void* eax_19 = sub_4ef7c0(arg2, 0, 0, edi_2, ebx_2, 1, 0, 0, 0, arg2[7], *arg2, arg2[1], 
            arg2[2], arg2[3], arg2[4], arg2[5], arg2[6], arg2[8], var_11c, 0, 1)
        sub_5f02dd(eax_1 ^ &var_124)
        return eax_19
else
    char* ecx = &data_13926d4
    
    while (true)
        eax_6.b = *ecx
        
        if (eax_6.b u>= 0x80 && (eax_6.b u< 0xa0 || eax_6.b u> 0xdf) && eax_6.b u< 0xfe)
            ecx = &ecx[2]
            continue
        
        if (eax_6.b == 0)
            break
        
        if (eax_6.b u>= 0x61 && eax_6.b u<= 0x7a)
            eax_6.b -= 0x20
            *ecx = eax_6.b
        
        ecx = &ecx[1]
    
    char* ecx_1 = esi
    
    while (true)
        eax_6.b = *ecx_1
        
        if (eax_6.b u>= 0x80 && (eax_6.b u< 0xa0 || eax_6.b u> 0xdf) && eax_6.b u< 0xfe)
            ecx_1 = &ecx_1[2]
            continue
        
        if (eax_6.b == 0)
            break
        
        if (eax_6.b u>= 0x61 && eax_6.b u<= 0x7a)
            eax_6.b -= 0x20
            *ecx_1 = eax_6.b
        
        ecx_1 = &ecx_1[1]
    
    int32_t eax_7 = sub_4d0f10(&data_13926d4, esi)
    
    if (eax_7 != 0 || data_13926d0 != ebx)
        goto label_4fceac
    
    var_11c = 2
    
    if (arg9 != eax_7 || data_13926a4 != eax_7 || data_13926a0 != eax_7 || eax_2 != data_8c4cf4
            || eax_3 != data_8c4cf8 || eax_4 != data_8c4cfc || arg7 != data_8c4d00)
        goto label_4fceac
    
    if (sub_475090(arg2[8]) != 0)
        goto label_4fceac
    
    data_1af1724 = 1

int32_t eax_13 = data_13926d0
char* eax_14

if (eax_13 s< 0)
    char* var_134_2 = &data_13926d4
    eax_14 = sub_4c84d0(&data_7027c0, "HAIKEI ( %s )")
else
    void var_110
    sub_4a7f60(eax_13, &var_110)
    void* var_134 = &var_110
    char* var_138_1 = &data_13926d4
    eax_14 = sub_4c84d0(&data_7027c0, "HAIKEI ( %s (%s) )")

if (data_702fc0 != 0)
    eax_14 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_14 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_14 = nullptr
        
        if (data_1af174c == 0 && eax_14 != 0)
            eax_14 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_14, data_72d6ac, data_719b6c, &data_7027c0, 0x61f088), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x61f088), 
                data_72d6ac, data_719b6c, &data_7027c0, 0x61f088)

sub_5f02dd(eax_1 ^ &var_124)
return eax_14
