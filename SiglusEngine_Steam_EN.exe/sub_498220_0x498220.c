// 函数: sub_498220
// 地址: 0x498220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char var_218[0x20c]
int32_t eax_1 = __security_cookie ^ &var_218
sub_4d1c30(eax_1, &data_1606c30, 0x7031c0, 0x273990)
int32_t* eax_2 = data_63ecf8

if (eax_2 s> 0)
    sub_4a4e90(eax_2, &data_187a5d0, 0x71633c, &data_1354f80, 4, 4, eax_2, 0x2710, "AVG_S")

sub_4a5b60()
int32_t edi = data_7037a0

if (data_1af179c == 0)
    data_1af4e70 = edi
    
    if (edi != 0)
        int32_t i
        
        do
            i = ShowCursor(1)
        while (i s<= 0)
    else
        int32_t i_1
        
        do
            i_1 = ShowCursor(0)
        while (i_1 s>= 0)

int32_t ecx = data_7037a4
data_7037a0 = edi
sub_45ee40(ecx, 1)
int32_t eax_5 = sub_48d1d0(sub_48e950(sub_45ea60(), &data_976f90, &data_719b6c, data_719b6c, 0), 
    *(data_976f9c + 0x24), data_976fa8, &data_719b74, 0x719b80)

if (eax_5 == 0)
    if (data_702fc0 != eax_5)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_5, data_72d6ac, data_719b6c, 0x6197c4, 0x61b06c), 
                data_72d6ac, data_719b6c, 0x6197c4, 0x61b06c), 
            data_72d6ac, data_719b6c, 0x6197c4, 0x61b06c)
        sub_4a1e40(3)
    
    data_976f90 = 1

void* ecx_6

for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 1)
    ecx_6 = sub_57f830(i_2)

sub_57f190(ecx_6)
sub_4a4e90(
    sub_4a4e90(sub_467ac0(), 0x98bf38, 0x8c1eb0, 0x98bf3c, 0xf40, 0xf40, 0x200, 0x1388, 
        "objmoji03"), 
    0x98c6d8, 0x8c34b8, &data_98c6dc, 0xf40, 0xf40, 0x200, 0x1388, "objmoji03")
sub_499e50()
sub_49a810()
sub_42c5c0()
sub_430850()
sub_427b80()
sub_482c90()
void* eax_10 = &data_933210
int32_t i_5 = 0x10
int32_t i_3

do
    *eax_10 = 0
    eax_10 += 0x42a0
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
sub_4926d0()

if (data_925238 s> 0 || data_92523c s> 0 || data_92522c != 0 || data_925230 != 0)
    __builtin_memset(&data_925224, 0, 0x1c)
    data_925244 = 0
    data_925248 = 0
    data_92524c = 0
    data_1086204 = 0
    data_108620c = 0
    data_925250 = 0
    data_925254 = 0
    data_925258 = 0
    data_1086210 = 0
    data_1086218 = 0
    data_92525c = 0
    data_925260 = 0
    data_10861e4 = 0
    data_10861ec = 0
    data_10861f4 = 0
    data_10861fc = 0
    data_108621c = 0
    data_1086220 = 0
    data_1086224 = 0
else
    data_1086204 = 0
    data_1086210 = 0
    data_108621c = 0

if (data_8fcab4 != 0)
    int32_t esi = data_8fcad8
    sub_41a240(&data_8fcab4)
    data_8fcad8 = esi

sub_42a9d0()

if (data_92b1b0 != 0 && data_92b3e8 == 0)
    void* eax_11
    int32_t ecx_8
    eax_11, ecx_8 = sub_4cfd70(&var_218, &data_92b1b0)
    int32_t var_224_1 = 0xffffffff
    data_92b1b0 = 0
    sub_49f8d0(eax_11, 0, &var_218, 0, ecx_8, 0, 0xffffffff)

char* edi_2 = nullptr

for (void* i_4 = &data_92b9a0; i_4 s< 0x933220; )
    if (*i_4 != 0 && *(i_4 + 0x210) == 0)
        sub_4cfd70(&var_218, i_4)
        int32_t eax_12 = *(i_4 + 0x24c)
        *i_4 = 0
        sub_4a1640(eax_12, &var_218, edi_2, nullptr, 0, eax_12)
    
    i_4 += 0x788
    edi_2 = &edi_2[1]

if (data_702fc0 != 0)
    sub_55a930(1)

data_131310c = data_7031c8
data_1392710 = data_7031cc
data_1392ccc = data_7031d0
data_1b8c21c = data_7031d4
data_1b8c218 = data_7031d8
data_1af0a0c = data_7031dc
data_1b8c214 = data_7031e4
data_187c514 = data_7031e8
data_187a5cc = data_7031ec
data_187c510 = data_7031f0
int32_t result = data_7031f4
data_1af0a08 = 0
data_187a5c8 = result
sub_5f02dd(eax_1 ^ &var_218)
return result
