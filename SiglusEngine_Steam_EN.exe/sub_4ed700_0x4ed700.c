// 函数: sub_4ed700
// 地址: 0x4ed700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_1b14e64
int32_t edi = data_1b14e68
int32_t* edx
int32_t* var_10 = edx

if (edi s<= 0 && esi == 0)
    int32_t eax
    eax.b = 0
    return eax

if (data_1af17ac != 0)
    void* ecx_1 = data_703660
    
    if (ecx_1 != 0xffffffff)
        uint32_t eax_1 = zx.d(data_703664)
        void* var_20_1 = ecx_1
        uint32_t var_24_1 = eax_1
        sub_4a33f0(eax_1, data_703668, ecx_1, data_70366c)
        edi = data_1b14e68
        esi = data_1b14e64
        edx = var_10
    
    data_1af17ac = 0

data_13701d8 = 0
void* eax_2 = &data_8fcb20
data_137010c = 1
int32_t* i_3 = 0x40
int32_t* i

do
    *eax_2 = 0
    eax_2 += 0x2d0
    i = i_3
    i_3 -= 1
while (i != 1)
eax_2.b = 0
data_1b14e70 = 0xffffffff
char var_5 = 0
int32_t* i_2 = i_3

if (edi s> 0)
    int32_t* i_1 = nullptr
    
    do
        void* var_20_2 = esi
        eax_2, i_3 = sub_4ed5d0(eax_2, edx, i_3)
        
        if ((*(esi + 0x18) != 0 && *(esi + 0x1c) != 2) || *(esi + 0xc) != 0)
            data_1b14e70 = i_1
            
            if (var_5 == 0)
                if (*(esi + 0x1c) != 2)
                    char* edi_1 = *(esi + 0x18)
                    
                    if (data_1311178 == 0 && data_1606c68 == 0)
                        eax_2, i_3 = sub_4d1ba0(eax_2, 0x101, 0x1606c6c, 0)
                        
                        if (edi_1 != 0 && *edi_1 != 0)
                            eax_2, i_3 = sub_4cfdf0(eax_2, edi_1, 0x1606c6c, 0x101)
                        
                        data_1606c68 = 1
                    
                    i_1 = i_2
                else if (data_1311178 == 0 && data_1606c68 == 0)
                    eax_2, i_3 = sub_4d1ba0(eax_2, 0x101, 0x1606c6c, 0)
                    data_1606c68 = 1
                
                char* edx_3 = *(esi + 0xc)
                
                if (edx_3 != 0 && data_1311178 == 0)
                    bool cond:3_1 = data_1606d78 != 0
                    data_1606c68 = 1
                    
                    if (not(cond:3_1))
                        if (data_1606d7c s<= 1)
                            i_3 = &data_1606c68
                            eax_2 = sub_498930(&data_1606c68, edx_3)
                        else
                            data_1606d78 = 1
                
                var_5 = 1
        
        edx = var_10
        i_1 += 1
        esi += 0x58
        i_2 = i_1
    while (i_1 s< data_1b14e68)

data_1b14e74 = 0
data_1b14e6d = 1
sub_580af0()
sub_420500()
int32_t ecx_2 = data_1af178c

if (ecx_2 == 0)
    data_1b8a70c = data_1392710
    data_1af1788 = ecx_2
    data_1b8a704 = ecx_2
    data_1b8a708 = 1

int32_t eax_4 = data_1b15280

if (data_702fc0 != 0)
    eax_4 = data_1333e48

data_1b15280 = eax_4
eax_4.b = 1
data_1bfdb10 = ecx_2
return eax_4
