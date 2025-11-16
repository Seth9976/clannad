// 函数: sub_65fd10
// 地址: 0x65fd10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = data_bac498
void* edx = data_bac510
*ecx = 0
ecx[1].b = *(edx + 0xb594)
*(ecx + 6) = *(edx + 0xb5b0)
ecx[2].b = *(edx + 0xb5cc)
*(ecx + 0xa) = *(edx + 0xb5e8)
ecx[3].b = *(edx + 0xb604)
*(ecx + 0xe) = *(edx + 0xb620)
ecx[4].b = *(edx + 0xb63c)
*(ecx + 0x12) = *(edx + 0xb658)
ecx[5].b = *(edx + 0xb674)
*(ecx + 0x16) = *(edx + 0xb690)
ecx[6].b = *(edx + 0xb6ac)
*(ecx + 0x1a) = *(edx + 0xb6c8)
ecx[7].b = *(edx + 0xb6e4)
*(ecx + 0x1e) = *(edx + 0xb700)
ecx[8].b = *(edx + 0xb71c)
*(ecx + 5) = *(edx + 0xb595)
*(ecx + 7) = *(edx + 0xb5b1)
*(ecx + 9) = *(edx + 0xb5cd)
*(ecx + 0xb) = *(edx + 0xb5e9)
*(ecx + 0xd) = *(edx + 0xb605)
*(ecx + 0xf) = *(edx + 0xb621)
*(ecx + 0x11) = *(edx + 0xb63d)
*(ecx + 0x13) = *(edx + 0xb659)
*(ecx + 0x15) = *(edx + 0xb675)
*(ecx + 0x17) = *(edx + 0xb691)
*(ecx + 0x19) = *(edx + 0xb6ad)
*(ecx + 0x1b) = *(edx + 0xb6c9)
*(ecx + 0x1d) = *(edx + 0xb6e5)
*(ecx + 0x1f) = *(edx + 0xb701)
*(ecx + 0x21) = *(edx + 0xb71d)

if (*(edx + 0xb738) s> 0)
    *(ecx + 0x22) = *(edx + 0xb73c)
    *(ecx + 0x23) = *(edx + 0xb73d)
    ecx[9].b = *(edx + 0xb73e)
    *(ecx + 0x25) = *(edx + 0xb758)
    *(ecx + 0x26) = *(edx + 0xb759)
    *(ecx + 0x27) = *(edx + 0xb75a)
    ecx[0xa].b = *(edx + 0xb774)
    *(ecx + 0x29) = *(edx + 0xb775)
    *(ecx + 0x2a) = *(edx + 0xb776)
    *(ecx + 0x2b) = *(edx + 0xb790)
    ecx[0xb].b = *(edx + 0xb791)
    *(ecx + 0x2d) = *(edx + 0xb792)

if (*(edx + 0xb7ac) s> 0)
    ecx[0xc].b = *(edx + 0xb7b0)
    *(ecx + 0x31) = *(edx + 0xb7b1)
    ecx[0xd] = *(edx + 0xb7b4)
    ecx[0xe].b = *(edx + 0xb894)
    *(ecx + 0x39) = *(edx + 0xb895)
    ecx[0xf] = *(edx + 0xb898)
    ecx[0x10].b = *(edx + 0xb978)
    *(ecx + 0x41) = *(edx + 0xb979)
    ecx[0x11] = *(edx + 0xb97c)
    ecx[0x12].b = *(edx + 0xba5c)
    *(ecx + 0x49) = *(edx + 0xba5d)
    ecx[0x13] = *(edx + 0xba60)

void* result = data_bac458
bool cond:0_1

if (*(result + 0x354) != 0)
label_65ff81:
    
    if (*(ecx + 5) == 0)
        *ecx = 0
    else
        cond:0_1 = ecx[1].b != 0
    label_65ff8b:
        
        if (not(cond:0_1))
            *ecx = 0
else
    result.b = *(data_bac4e4 + 0x19a)
    
    if (result.b != 0)
        goto label_65ff81
    
    if (*(ecx + 5) != result.b && ecx[1].b != result.b)
        result = data_bac4a0
        cond:0_1 = *(result + 0x104) != 0
        goto label_65ff8b
    
    *ecx = 0
return result
