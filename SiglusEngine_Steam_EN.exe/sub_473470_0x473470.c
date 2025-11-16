// 函数: sub_473470
// 地址: 0x473470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = data_1cd640c
int32_t* var_cc
int32_t* var_c4
int32_t* var_c0
void* var_bc
int32_t* var_b8
int32_t* var_ac
int32_t* ecx_1
void* edx_6
int32_t* ebx
int32_t* edi

if (eax_2 != 0)
    var_cc = eax_2 + 0x10
    var_bc = eax_2 + 0x4c
    var_c4 = eax_2 + 0x14
    edi = eax_2 + 0x6c
    void var_d4
    var_b8 = &var_d4
    ebx = eax_2 + 0x2d0
    var_c0 = nullptr
    void var_d0
    var_ac = &var_d0
    edx_6 = eax_2 + 0x444
    ecx_1 = eax_2 + 0x7bc
else
    void* eax_3 = data_1cd6408
    void* ecx = data_1cd6404
    var_cc = eax_3 + 0x20
    ebx = ecx + 0x14c
    var_c4 = eax_3 + 0x24
    edi = eax_3 + 0x280
    var_c0 = eax_3 + 0x30
    var_b8 = eax_3 + 0x28
    var_ac = eax_3 + 0x2c
    var_bc = eax_3 + 0x68
    edx_6 = ecx + 0x2c0
    ecx_1 = ecx + 0x638

char* var_b0 = edx_6
int32_t var_a4
sub_473150(edx_6 + 0x258, &var_a4)
*edi = *ebx
edi[3] = ebx[3]
char var_6c
edi[0xc].b = ebx[4].b + var_6c
char var_68
*(edi + 0x31) = *(ebx + 0x11) + var_68
char var_80
*(edi + 0x32) = *(ebx + 0x12) + var_80
char var_7c
*(edi + 0x33) = *(ebx + 0x13) + var_7c
char var_78
edi[0xd].b = ebx[5].b + var_78
char var_74
*(edi + 0x35) = *(ebx + 0x15) + var_74
int32_t var_8c
edi[0xe] = ebx[6] + var_8c
int32_t var_88
edi[0xf] = ebx[7] + var_88
void var_60
void* var_e8 = &var_60
int32_t var_84
edi[0x10] = ebx[8] + var_84
int32_t var_64
int32_t eax_19 = ebx[9] + var_64
edi[0x11] = eax_19
int32_t var_70
sub_4708d0(eax_19, &edi[0x12], ebx, &var_60, var_70)
int32_t var_20
int32_t var_18
edi[0x14] = ebx[0x1f] + ebx[0x1d] + var_18 + var_20
int32_t var_1c
int32_t var_14
edi[0x15] = ebx[0x20] + ebx[0x1e] + var_14 + var_1c
int32_t var_98
edi[0x16] = ebx[0x21] + var_98
int32_t var_94
edi[0x17] = ebx[0x22] + var_94
int32_t var_90
edi[0x18] = ebx[0x23] + var_90
edi[0x13] = ebx[0xb]
int32_t eax_34
eax_34.b = ebx[0x1a] != 0
edi[0x22].b = eax_34.b
int32_t ecx_8 = ebx[1] + ebx[0x2b] + ebx[0x2a] + ebx[0x29] + ebx[0x28] + ebx[0x27] + ebx[0x26]
    + ebx[0x25] + ebx[0x24] + var_a4
int32_t var_a0
int32_t esi_2 = ebx[2] + ebx[0x33] + ebx[0x32] + ebx[0x31] + ebx[0x30] + ebx[0x2f] + ebx[0x2e]
    + ebx[0x2d] + ebx[0x2c] + var_a0
int32_t var_b4 = ecx_8
*var_cc = ecx_8
*var_c4 = esi_2
int32_t var_9c

if (var_c0 != 0)
    *var_c0 = var_9c

uint32_t eax_54 = var_b8
*eax_54 = 0
*var_ac = 0
sub_4720f0(sub_470bc0(eax_54, edi, var_b0, ebx[0xb], eax_54, var_ac), edi, var_b0, var_b8, var_ac)
sub_4724e0(var_b0, edi)
sub_472e10(sub_4729b0(var_b0, edi), edi, var_b0, var_b8, var_ac)
sub_472ff0(var_b0, edi)
int32_t* eax_57 = data_1cd63f4

if (*eax_57 != 0)
    int32_t edx_16 = ebx[0x14]
    
    if (edx_16 != 0)
        if (edx_16 != 0x64)
            int32_t eax_58
            int32_t edx_17
            edx_17:eax_58 = muls.dp.d(0xae147ae1, eax_57[0x14] * edx_16)
            int32_t edx_18 = edx_17 s>> 5
            var_b4 += (edx_18 u>> 0x1f) + edx_18
            eax_57 = data_1cd63f4
        else
            var_b4 -= eax_57[0x14]
    
    int32_t edx_19 = ebx[0x15]
    
    if (edx_19 != 0)
        if (edx_19 != 0x64)
            int32_t eax_62
            int32_t edx_20
            edx_20:eax_62 = muls.dp.d(0xae147ae1, eax_57[0x15] * edx_19)
            int32_t edx_21 = edx_20 s>> 5
            esi_2 += (edx_21 u>> 0x1f) + edx_21
        else
            esi_2 -= eax_57[0x15]

if (ebx[0x1b] != 0 && (data_1cd640c == 0 || *(data_1cd6404 + 0x1b8) != 0))
    int32_t ecx_24 = data_1cd63f8
    int32_t eax_68
    
    if (ebx[0x14] != 0)
        eax_68 = var_b4 + *(ecx_24 + 0x10)
    else
        eax_68 = var_b4 + *(ecx_24 + 0x18)
    
    var_b4 = eax_68
    
    if (ebx[0x15] != 0)
        esi_2 += *(ecx_24 + 0x14)
    else
        esi_2 += *(ecx_24 + 0x1c)

int32_t ecx_26 = var_b4 - (ebx[0x1d] + var_18)
int32_t esi_3 = esi_2 - (ebx[0x1e] + var_14)
*var_bc = ecx_26
*(var_bc + 8) = ecx_26
*(var_bc + 4) = esi_3
*(var_bc + 0xc) = esi_3
void* edx_24 = var_bc
edi[1] = ebx[0x3b] + ebx[0x36] + *var_b8 + ecx_26
edi[2] = ebx[0x3c] + ebx[0x37] + ebx[0x16] + var_9c + esi_3 + *var_ac
int32_t* eax_83 = ecx_1

if (*eax_83 s>= 0)
    void* esi_6 = &(&data_8c4ac0)[eax_83[2] * 3]:4
    int32_t eax_85 = sub_414cb0(*(esi_6 + 4), *(esi_6 + 8))
    int32_t eax_86 = sub_414cb0(*(esi_6 + 0xc), *(esi_6 + 0x10))
    int32_t eax_87 = sub_414cb0(*(esi_6 + 0x14), *(esi_6 + 0x18))
    int32_t eax_88 = sub_414cb0(*(esi_6 + 0x1c), *(esi_6 + 0x20))
    int32_t eax_89 = sub_414cb0(*(esi_6 + 0x24), *(esi_6 + 0x28))
    int32_t ecx_33 = ecx_1[4]
    int32_t edx_30 = ecx_1[3]
    int32_t ecx_34
    
    if (ecx_33 == 1)
        ecx_34 = 4
    else if (ecx_33 == 2)
        ecx_34 = 5
    else if (edx_30 == eax_87)
        ecx_34 = 2
    else if (edx_30 == eax_89)
        ecx_34 = 3
    else if (edx_30 != eax_86)
        if (edx_30 != eax_88)
            ecx_34.b = edx_30 == eax_85
        else if (edx_30 != eax_85)
            ecx_34 = 0
            
            if (ecx_1[5] == 1)
                ecx_34 = 3
        else
            ecx_34 = 3
    else if (edx_30 != eax_85)
        ecx_34 = 0
        
        if (ecx_1[5] == 1)
            ecx_34 = 2
    else
        ecx_34 = 2
    
    int32_t esi_9 = (ecx_34 + *ecx_1 * 6) * 7
    *edi += *((esi_9 << 2) + &data_1305d70)
    
    if (edi[0x13] == 1)
        edi[0x13] = *((esi_9 << 2) + &data_1305d74)
    
    edi[1] += *((esi_9 << 2) + &data_1305d78)
    edi[2] += *((esi_9 << 2) + &data_1305d7c)
    int32_t eax_98 = *((esi_9 << 2) + &data_1305d80)
    
    if (eax_98 != 0xff)
        edi[0x12].b = (zx.d(edi[0x12].b) * eax_98 s/ 0xff).b
    
    edi[0x11] += *((esi_9 << 2) + &data_1305d84)
    int32_t eax_104 = edi[0x11]
    
    if (eax_104 s> 0xff)
        edi[0x11] = 0xff
    else if (eax_104 s< 0xffffff01)
        edi[0x11] = 0xffffff01
    
    *(edi + 0x31) += *((esi_9 << 2) + &data_1305d88)
    edx_24 = var_bc
    
    if (*(edi + 0x31) u> 0xff)
        *(edi + 0x31) = 0xff

int32_t esi_10 = data_1cd640c

if (esi_10 == 0 && edi[0x13] != esi_10)
    if (data_1311178 != esi_10 && *data_1cd6400 != 0)
        edi[0x13] = esi_10
    
    if (edi[0x13] != 0)
        if (*(data_1cd63fc + 8) != 0 &&
                (data_131256c != 0 || data_13125b4 != 0 || data_1311174 != 0 || data_1392704 != 0))
            edi[0x13] = 0
        
        if (edi[0x13] != 0)
            int32_t eax_108 = sub_473420()
            
            if (eax_108 == 0)
                edi[0x13] = eax_108

*(edx_24 + 0x10) = edi[1]
*(edx_24 + 0x14) = edi[2]
*(edx_24 + 0x18) = edi[1]
*(edx_24 + 0x1c) = edi[2]
int32_t ecx_37 = ebx[0xc]
int32_t result
int32_t var_40
int32_t var_3c
int32_t var_38
int32_t var_34

if (ecx_37 != 0xffffffff || ebx[0xd] != ecx_37 || ebx[0xe] != ecx_37 || ebx[0xf] != ecx_37)
    edi[0x1e] = var_40 + ecx_37
    edi[0x1f] = ebx[0xd] + var_3c
    edi[0x20] = ebx[0xe] + var_38
    result = ebx[0xf] + var_34
else
    int32_t ecx_38 = data_70300c
    edi[0x1e] = var_40
    edi[0x1f] = var_3c
    ecx_37 = data_7030dc
    edi[0x20] = var_38 + ecx_38 - 1
    result = var_34 - 1 + ecx_37
bool cond:3 = edi[0x13] == 0
edi[0x21] = result

if (not(cond:3))
    result = edi[0x1e]
    
    if (result s<= edi[0x20])
        ecx_37 = edi[0x1f]
    
    if (result s> edi[0x20] || ecx_37 s> edi[0x21] || result s> data_70300c || ecx_37 s> data_7030dc
            || edi[0x20] s< 0 || edi[0x21] s< 0)
        edi[0x13] = 0

if (esi_10 != 0)
    void* ebx_1 = data_1cd6408
    
    if (edi[3] == 0)
        edi[3] = *(ebx_1 + 0x28c)
    
    if (edi[0xc].b == 0)
        result.b = *(ebx_1 + 0x2b0)
        edi[0xc].b = result.b
    
    if (*(edi + 0x31) == 0)
        result.b = *(ebx_1 + 0x2b1)
        *(edi + 0x31) = result.b
    
    if (*(edi + 0x35) == 0)
        *(edi + 0x32) = *(ebx_1 + 0x2b2)
        *(edi + 0x33) = *(ebx_1 + 0x2b3)
        edi[0xd].b = *(ebx_1 + 0x2b4)
        *(edi + 0x35) = *(ebx_1 + 0x2b5)
    
    if (edi[0xe] == 0 && edi[0xf] == 0 && edi[0x10] == 0)
        edi[0xe] = *(ebx_1 + 0x2b8)
        edi[0xf] = *(ebx_1 + 0x2bc)
        edi[0x10] = *(ebx_1 + 0x2c0)
    
    if (edi[0x11] == 0)
        edi[0x11] = *(ebx_1 + 0x2c4)
    
    ecx_37.b = *(ebx_1 + 0x2c8)
    
    if (ecx_37.b != 0xff)
        int32_t esi_12 = zx.d(ecx_37.b) * zx.d(edi[0x12].b)
        int32_t eax_137 = esi_12 s/ 0xff
        
        if (esi_12 s/ 0xff s< 0)
            eax_137 = 0
        else if (eax_137 s> 0xff)
            eax_137 = 0xff
        
        edx_24 = var_bc
        edi[0x12].b = eax_137.b
    
    if (*(ebx_1 + 0x2cc) == 0)
        edi[0x13] = 0
    
    if (*(ebx_1 + 0x308) == 0)
        edi[0x22].b = 0
    
    *var_cc += *(ebx_1 + 0x20)
    *var_c4 += *(ebx_1 + 0x24)
    *edx_24 += *(ebx_1 + 0x20)
    *(edx_24 + 4) += *(ebx_1 + 0x24)
    *(edx_24 + 8) += *(ebx_1 + 0x20)
    *(edx_24 + 0xc) += *(ebx_1 + 0x24)
    int32_t ecx_44 = *(ebx_1 + 0x28) + *(ebx_1 + 0x20)
    result = *(data_1cd6404 + 0x1a4) + *(ebx_1 + 0x30) + *(ebx_1 + 0x2c) + *(ebx_1 + 0x24)
    edi[1] += ecx_44
    edi[2] += result
    *(edx_24 + 0x10) += ecx_44
    *(edx_24 + 0x14) += result
    *(edx_24 + 0x18) += ecx_44
    *(edx_24 + 0x1c) += result
    
    if (edi[0x13] != 0)
        int32_t ecx_45 = edi[0x1e]
        
        if (ecx_45 s> *(ebx_1 + 0x300))
            edi[0x13] = 0
        else
            result = *(ebx_1 + 0x2f8)
            int32_t edx_37 = edi[0x20]
            
            if (edx_37 s< result || edi[0x1f] s> *(ebx_1 + 0x304))
                edi[0x13] = 0
            else
                int32_t esi_15 = edi[0x1f]
                
                if (edi[0x21] s< *(ebx_1 + 0x2fc))
                    edi[0x13] = 0
                else
                    if (ecx_45 s< result)
                        edi[0x1e] = result
                    
                    int32_t eax_148 = *(ebx_1 + 0x300)
                    
                    if (edx_37 s> eax_148)
                        edi[0x20] = eax_148
                    
                    int32_t eax_149 = *(ebx_1 + 0x2fc)
                    
                    if (esi_15 s< eax_149)
                        edi[0x1f] = eax_149
                    
                    result = *(ebx_1 + 0x304)
                    
                    if (edi[0x21] s> result)
                        edi[0x21] = result

if (edi[0x13] != 0)
    result = ebx[0x10]
    
    if (result != 0xfff0bdc1 || ebx[0x11] != result || ebx[0x12] != result || ebx[0x13] != result)
        int32_t esi_16 = edi[1]
        int32_t var_30
        result = result + ebx[0x1d] + esi_16 + var_30 + var_18
        int32_t result_2 = result
        int32_t var_28
        int32_t esi_19 = ebx[0x12] + ebx[0x1d] + esi_16 + var_28 + var_18
        int32_t var_24
        int32_t edx_49 = ebx[0x13] + ebx[0x1e] + edi[2] + var_24 + var_14
        int32_t result_1 = result
        
        if (result_2 s> esi_19)
            edi[0x13] = 0
        else
            int32_t var_2c
            result = ebx[0x11] + ebx[0x1e] + edi[2] + var_2c + var_14
            
            if (result s> edx_49 || result_2 s> data_70300c || result s> data_7030dc || esi_19 s< 0
                    || edx_49 s< 0 || edi[0x1e] s> esi_19 || edi[0x20] s< result_2
                    || edi[0x1f] s> edx_49)
                edi[0x13] = 0
            else
                int32_t ebx_2 = edi[0x21]
                
                if (ebx_2 s< result)
                    edi[0x13] = 0
                else
                    if (edi[0x1e] s< result_2)
                        edi[0x1e] = result_2
                    
                    if (edi[0x20] s> esi_19)
                        edi[0x20] = esi_19
                    
                    if (edi[0x1f] s< result)
                        edi[0x1f] = result
                    
                    if (ebx_2 s> edx_49)
                        edi[0x21] = edx_49
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
