// 函数: sub_4977f0
// 地址: 0x4977f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_41c
int32_t eax_1 = __security_cookie ^ &var_41c
sub_4d1c30(eax_1, data_976fa8 + data_719b74, 0x719b80, 0x20)
int32_t esi = data_63ecf8
data_7031c8 = data_131310c
data_7031cc = data_1392710
data_7031d0 = data_1392ccc
data_7031d4 = data_1b8c21c
data_7031d8 = data_1b8c218
data_7031dc = data_1af0a0c
data_7031e0 = data_1af0a08
data_7031e4 = data_1b8c214
data_7031e8 = data_187c514
data_7031ec = data_187a5cc
data_7031f0 = data_187c510
char* eax_13 = data_187a5c8
data_7031f4 = eax_13
data_7035c4 = arg1

if (esi s> 0)
    eax_13 = sub_4a4d00(eax_13, &data_187a5d0, 0x71633c, &data_1354f80, 4, 4, esi, 0x2710)
    
    if (data_702fc0 != 0 && eax_13 s< esi)
        enum MESSAGEBOX_STYLE uType = data_63ecf8
        
        if (uType s> MB_OK)
            void* esi_1 = nullptr
            int32_t edi_1 = 0
            enum MESSAGEBOX_STYLE i
            
            do
                if (*(edi_1 + &data_187a5d0) == 0)
                    esi_1 += 1
                else
                    eax_13 = sub_4cfc80(*(edi_1 + &data_1354f80))
                    esi_1 += eax_13
                
                edi_1 += 4
                i = uType
                uType -= 1
            while (i != MB_OKCANCEL)
            
            if (esi_1 s>= 0x2710)
                int32_t edi_2 = data_1af173c
                
                if (edi_2 s< 8)
                    int32_t var_42c_1 = 0x2710
                    char text[0x404]
                    sub_4c84d0(&text, 0x61ba0c)
                    
                    if (edi_2 s< 4)
                        MessageBoxA(data_7027bc, &text, 0x61ba34, uType)
                        edi_2 = data_1af173c
                    
                    int32_t var_42c_3 = 0x2710
                    sub_4c84d0(&data_7027c0, &data_61bb38)
                    void* var_42c_4 = esi_1
                    eax_13 = sub_4c84d0(&text, &data_61bb04)
                    
                    if (data_702fc0 != 0)
                        sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        sub_55f390(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                        eax_13 = sub_4a1e40(3)
                        edi_2 = data_1af173c
                
                data_1af173c = edi_2 + 1

sub_4a4d00(sub_4a4d00(eax_13, 0x98bf38, 0x8c1eb0, 0x98bf3c, 0xf40, 0xf40, 0x200, 0x1388), 0x98c6d8, 
    0x8c34b8, &data_98c6dc, 0xf40, 0xf40, 0x200, 0x1388)
int32_t eax_18 = sub_41e9b0()
data_1bfdd70 = 0xffffffff
data_1b1bccc = 0
data_1bfdd78 = 0
sub_4d1c30(eax_18, 0x7031c0, &data_1606c30, 0x273990)
data_187a5c0 = 1
int32_t ecx_4 = sub_4d1ba0(eax_18, 0x328, &data_1606c68, 0)
data_1606c68 = 0
data_1606d7c = 1
data_1606d78 = 0
data_1606f8c = 0

if (arg2 != 0 && *arg2 != 0)
    int32_t var_42c_6 = ecx_4
    sub_4988a0(&data_1606c68, arg2)

char* result = data_702fc0

if (result != 0)
    sub_495290(&data_1606c30)
    result = data_702fc0

if (arg1 u<= 7)
    switch (arg1)
        case 0
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    "SAVEPOINT "), 
                                data_72d6ac, data_719b6c, 0x61afc0, "SAVEPOINT "), 
                            data_72d6ac, data_719b6c, 0x61afc0, "SAVEPOINT ")
        case 1
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    "DATASAVE "), 
                                data_72d6ac, data_719b6c, 0x61afc0, "DATASAVE "), 
                            data_72d6ac, data_719b6c, 0x61afc0, "DATASAVE ")
        case 2
            data_1af172c = 1
            
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_13184dc == 0)
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    &data_61b038), 
                                data_72d6ac, data_719b6c, 0x61afc0, &data_61b038), 
                            data_72d6ac, data_719b6c, 0x61afc0, &data_61b038)
        case 3
            data_16070e8 = 1
            
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_13184d8 == 0)
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    &data_161d5f0), 
                                data_72d6ac, data_719b6c, 0x61afc0, &data_161d5f0), 
                            data_72d6ac, data_719b6c, 0x61afc0, &data_161d5f0)
        case 4
            data_16070e8 = 1
            
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_13184d8 == 0)
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, "PRINT "), 
                                data_72d6ac, data_719b6c, 0x61afc0, "PRINT "), 
                            data_72d6ac, data_719b6c, 0x61afc0, "PRINT ")
        case 5
            data_16070e8 = 1
            
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_13184d8 == 0)
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, "R / PP "), 
                                data_72d6ac, data_719b6c, 0x61afc0, "R / PP "), 
                            data_72d6ac, data_719b6c, 0x61afc0, "R / PP ")
        case 6
            if (data_12a2934 == 0)
                if (result != 0)
                    result = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            result = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            result = nullptr
                        
                        if (data_1af174c == 0 && result != 0)
                            result = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                        &data_61b00c), 
                                    data_72d6ac, data_719b6c, 0x61afc0, &data_61b00c), 
                                data_72d6ac, data_719b6c, 0x61afc0, &data_61b00c)
            else if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    &data_61afdc), 
                                data_72d6ac, data_719b6c, 0x61afc0, &data_61afdc), 
                            data_72d6ac, data_719b6c, 0x61afc0, &data_61afdc)
        case 7
            data_16070e8 = 1
            
            if (result != 0)
                result = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        result = nullptr
                    
                    if (data_13184d8 == 0)
                        result = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        result = nullptr
                    
                    if (data_1af174c == 0 && result != 0)
                        result = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, 
                                    "MULTI_MESSAGE "), 
                                data_72d6ac, data_719b6c, 0x61afc0, "MULTI_MESSAGE "), 
                            data_72d6ac, data_719b6c, 0x61afc0, "MULTI_MESSAGE ")
else if (result != 0)
    result = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            result = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            result = nullptr
        
        if (data_1af174c == 0 && result != 0)
            result = sub_55f390(
                sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, 0x61afc0, &data_619850), 
                    data_72d6ac, data_719b6c, 0x61afc0, &data_619850), 
                data_72d6ac, data_719b6c, 0x61afc0, &data_619850)

sub_5f02dd(eax_1 ^ &var_41c)
return result
