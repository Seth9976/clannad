// 函数: sub_466140
// 地址: 0x466140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg1
int32_t edi
int32_t var_10 = edi

while (true)
    if (esi[0x69] == 0)
        int32_t eax_2
        
        if (*(esi[0x6f] + 0xc) != 0)
            eax_2 = sub_465f90(esi)
        else
            eax_2 = sub_4660a0(esi)
        
        if (eax_2 == 0)
            break
    
    int32_t eax_3 = esi[0x69]
    
    if (eax_3 - 1 u> 0xfd)
    label_4662b1:
        void* ecx_7 = *esi
        *(ecx_7 + 0x14) = 0x44
        *(ecx_7 + 0x18) = eax_3
        (*ecx_7)(esi)
        esi[0x69] = 0
    else
        int32_t eax_4
        
        switch (eax_3 + &jump_table_46630c[0xf]:3)
            case &lookup_table_46634c, &lookup_table_46634c[0xcf], &lookup_table_46634c[0xd0], 
                    &lookup_table_46634c[0xd1], &lookup_table_46634c[0xd2], 
                    &lookup_table_46634c[0xd3], &lookup_table_46634c[0xd4], 
                    &lookup_table_46634c[0xd5], &lookup_table_46634c[0xd6]
                void* ecx_6 = *esi
                *(ecx_6 + 0x14) = 0x5c
                *(ecx_6 + 0x18) = eax_3
                (*(ecx_6 + 4))(esi, 1)
                esi[0x69] = 0
                continue
                continue
            case &lookup_table_46634c[1], &lookup_table_46634c[2], &lookup_table_46634c[3], 
                    &lookup_table_46634c[4], &lookup_table_46634c[5], &lookup_table_46634c[6], 
                    &lookup_table_46634c[7], &lookup_table_46634c[8], &lookup_table_46634c[9], 
                    &lookup_table_46634c[0xa], &lookup_table_46634c[0xb], 
                    &lookup_table_46634c[0xc], &lookup_table_46634c[0xd], 
                    &lookup_table_46634c[0xe], &lookup_table_46634c[0xf], 
                    &lookup_table_46634c[0x10], &lookup_table_46634c[0x11], 
                    &lookup_table_46634c[0x12], &lookup_table_46634c[0x13], 
                    &lookup_table_46634c[0x14], &lookup_table_46634c[0x15], 
                    &lookup_table_46634c[0x16], &lookup_table_46634c[0x17], 
                    &lookup_table_46634c[0x18], &lookup_table_46634c[0x19], 
                    &lookup_table_46634c[0x1a], &lookup_table_46634c[0x1b], 
                    &lookup_table_46634c[0x1c], &lookup_table_46634c[0x1d], 
                    &lookup_table_46634c[0x1e], &lookup_table_46634c[0x1f], 
                    &lookup_table_46634c[0x20], &lookup_table_46634c[0x21], 
                    &lookup_table_46634c[0x22], &lookup_table_46634c[0x23], 
                    &lookup_table_46634c[0x24], &lookup_table_46634c[0x25], 
                    &lookup_table_46634c[0x26], &lookup_table_46634c[0x27], 
                    &lookup_table_46634c[0x28], &lookup_table_46634c[0x29], 
                    &lookup_table_46634c[0x2a], &lookup_table_46634c[0x2b], 
                    &lookup_table_46634c[0x2c], &lookup_table_46634c[0x2d], 
                    &lookup_table_46634c[0x2e], &lookup_table_46634c[0x2f], 
                    &lookup_table_46634c[0x30], &lookup_table_46634c[0x31], 
                    &lookup_table_46634c[0x32], &lookup_table_46634c[0x33], 
                    &lookup_table_46634c[0x34], &lookup_table_46634c[0x35], 
                    &lookup_table_46634c[0x36], &lookup_table_46634c[0x37], 
                    &lookup_table_46634c[0x38], &lookup_table_46634c[0x39], 
                    &lookup_table_46634c[0x3a], &lookup_table_46634c[0x3b], 
                    &lookup_table_46634c[0x3c], &lookup_table_46634c[0x3d], 
                    &lookup_table_46634c[0x3e], &lookup_table_46634c[0x3f], 
                    &lookup_table_46634c[0x40], &lookup_table_46634c[0x41], 
                    &lookup_table_46634c[0x42], &lookup_table_46634c[0x43], 
                    &lookup_table_46634c[0x44], &lookup_table_46634c[0x45], 
                    &lookup_table_46634c[0x46], &lookup_table_46634c[0x47], 
                    &lookup_table_46634c[0x48], &lookup_table_46634c[0x49], 
                    &lookup_table_46634c[0x4a], &lookup_table_46634c[0x4b], 
                    &lookup_table_46634c[0x4c], &lookup_table_46634c[0x4d], 
                    &lookup_table_46634c[0x4e], &lookup_table_46634c[0x4f], 
                    &lookup_table_46634c[0x50], &lookup_table_46634c[0x51], 
                    &lookup_table_46634c[0x52], &lookup_table_46634c[0x53], 
                    &lookup_table_46634c[0x54], &lookup_table_46634c[0x55], 
                    &lookup_table_46634c[0x56], &lookup_table_46634c[0x57], 
                    &lookup_table_46634c[0x58], &lookup_table_46634c[0x59], 
                    &lookup_table_46634c[0x5a], &lookup_table_46634c[0x5b], 
                    &lookup_table_46634c[0x5c], &lookup_table_46634c[0x5d], 
                    &lookup_table_46634c[0x5e], &lookup_table_46634c[0x5f], 
                    &lookup_table_46634c[0x60], &lookup_table_46634c[0x61], 
                    &lookup_table_46634c[0x62], &lookup_table_46634c[0x63], 
                    &lookup_table_46634c[0x64], &lookup_table_46634c[0x65], 
                    &lookup_table_46634c[0x66], &lookup_table_46634c[0x67], 
                    &lookup_table_46634c[0x68], &lookup_table_46634c[0x69], 
                    &lookup_table_46634c[0x6a], &lookup_table_46634c[0x6b], 
                    &lookup_table_46634c[0x6c], &lookup_table_46634c[0x6d], 
                    &lookup_table_46634c[0x6e], &lookup_table_46634c[0x6f], 
                    &lookup_table_46634c[0x70], &lookup_table_46634c[0x71], 
                    &lookup_table_46634c[0x72], &lookup_table_46634c[0x73], 
                    &lookup_table_46634c[0x74], &lookup_table_46634c[0x75], 
                    &lookup_table_46634c[0x76], &lookup_table_46634c[0x77], 
                    &lookup_table_46634c[0x78], &lookup_table_46634c[0x79], 
                    &lookup_table_46634c[0x7a], &lookup_table_46634c[0x7b], 
                    &lookup_table_46634c[0x7c], &lookup_table_46634c[0x7d], 
                    &lookup_table_46634c[0x7e], &lookup_table_46634c[0x7f], 
                    &lookup_table_46634c[0x80], &lookup_table_46634c[0x81], 
                    &lookup_table_46634c[0x82], &lookup_table_46634c[0x83], 
                    &lookup_table_46634c[0x84], &lookup_table_46634c[0x85], 
                    &lookup_table_46634c[0x86], &lookup_table_46634c[0x87], 
                    &lookup_table_46634c[0x88], &lookup_table_46634c[0x89], 
                    &lookup_table_46634c[0x8a], &lookup_table_46634c[0x8b], 
                    &lookup_table_46634c[0x8c], &lookup_table_46634c[0x8d], 
                    &lookup_table_46634c[0x8e], &lookup_table_46634c[0x8f], 
                    &lookup_table_46634c[0x90], &lookup_table_46634c[0x91], 
                    &lookup_table_46634c[0x92], &lookup_table_46634c[0x93], 
                    &lookup_table_46634c[0x94], &lookup_table_46634c[0x95], 
                    &lookup_table_46634c[0x96], &lookup_table_46634c[0x97], 
                    &lookup_table_46634c[0x98], &lookup_table_46634c[0x99], 
                    &lookup_table_46634c[0x9a], &lookup_table_46634c[0x9b], 
                    &lookup_table_46634c[0x9c], &lookup_table_46634c[0x9d], 
                    &lookup_table_46634c[0x9e], &lookup_table_46634c[0x9f], 
                    &lookup_table_46634c[0xa0], &lookup_table_46634c[0xa1], 
                    &lookup_table_46634c[0xa2], &lookup_table_46634c[0xa3], 
                    &lookup_table_46634c[0xa4], &lookup_table_46634c[0xa5], 
                    &lookup_table_46634c[0xa6], &lookup_table_46634c[0xa7], 
                    &lookup_table_46634c[0xa8], &lookup_table_46634c[0xa9], 
                    &lookup_table_46634c[0xaa], &lookup_table_46634c[0xab], 
                    &lookup_table_46634c[0xac], &lookup_table_46634c[0xad], 
                    &lookup_table_46634c[0xae], &lookup_table_46634c[0xaf], 
                    &lookup_table_46634c[0xb0], &lookup_table_46634c[0xb1], 
                    &lookup_table_46634c[0xb2], &lookup_table_46634c[0xb3], 
                    &lookup_table_46634c[0xb4], &lookup_table_46634c[0xb5], 
                    &lookup_table_46634c[0xb6], &lookup_table_46634c[0xb7], 
                    &lookup_table_46634c[0xb8], &lookup_table_46634c[0xb9], 
                    &lookup_table_46634c[0xba], &lookup_table_46634c[0xbb], 
                    &lookup_table_46634c[0xbc], &lookup_table_46634c[0xbd], 
                    &lookup_table_46634c[0xbe], &lookup_table_46634c[0xdd], 
                    &lookup_table_46634c[0xde], &lookup_table_46634c[0xef], 
                    &lookup_table_46634c[0xf0], &lookup_table_46634c[0xf1], 
                    &lookup_table_46634c[0xf2], &lookup_table_46634c[0xf3], 
                    &lookup_table_46634c[0xf4], &lookup_table_46634c[0xf5], 
                    &lookup_table_46634c[0xf6], &lookup_table_46634c[0xf7], 
                    &lookup_table_46634c[0xf8], &lookup_table_46634c[0xf9], 
                    &lookup_table_46634c[0xfa], &lookup_table_46634c[0xfb], 
                    &lookup_table_46634c[0xfc]
                goto label_4662b1
            case &lookup_table_46634c[0xbf], &lookup_table_46634c[0xc0]
                eax_4 = sub_464ea0(0, 0, esi)
            case &lookup_table_46634c[0xc1]
                eax_4 = sub_464ea0(1, 0, esi)
            case &lookup_table_46634c[0xc2], &lookup_table_46634c[0xc4], 
                    &lookup_table_46634c[0xc5], &lookup_table_46634c[0xc6], 
                    &lookup_table_46634c[0xc7], &lookup_table_46634c[0xca], 
                    &lookup_table_46634c[0xcc], &lookup_table_46634c[0xcd], 
                    &lookup_table_46634c[0xce]
                void* ecx_5 = *esi
                *(ecx_5 + 0x14) = 0x3c
                *(ecx_5 + 0x18) = eax_3
                (*ecx_5)(esi)
                esi[0x69] = 0
                continue
                continue
            case &lookup_table_46634c[0xc3]
                if (sub_465440() == 0)
                    break
                
                esi[0x69] = 0
                continue
            case &lookup_table_46634c[0xc8]
                if (sub_464ea0(0, 1, esi) == 0)
                    break
                
                esi[0x69] = 0
                continue
                continue
            case &lookup_table_46634c[0xc9]
                eax_4 = sub_464ea0(1, 1, esi)
            case &lookup_table_46634c[0xcb], &lookup_table_46634c[0xdb]
                int32_t eax_13
                eax_13, esi = sub_465ee0(esi)
                
                if (eax_13 == 0)
                    break
                
                *0x1a5 = 0
                continue
            case &lookup_table_46634c[0xd7]
                eax_4 = sub_464df0(esi)
            case &lookup_table_46634c[0xd8]
                void* eax_16 = *esi
                *(eax_16 + 0x14) = 0x55
                (*(eax_16 + 4))(esi, 1)
                esi[0x69] = 0
                return 2
            case &lookup_table_46634c[0xd9]
                if (sub_465180(esi) != 0)
                    esi[0x69] = 0
                    return 1
                
                break
                break
            case &lookup_table_46634c[0xda]
                if (sub_4657c0(esi) == 0)
                    break
                
                esi[0x69] = 0
                continue
            case &lookup_table_46634c[0xdc]
                int32_t eax_9
                eax_9, esi = sub_465a10(esi)
                
                if (eax_9 == 0)
                    break
                
                *0x1a5 = 0
                continue
            case &lookup_table_46634c[0xdf], &lookup_table_46634c[0xe0], 
                    &lookup_table_46634c[0xe1], &lookup_table_46634c[0xe2], 
                    &lookup_table_46634c[0xe3], &lookup_table_46634c[0xe4], 
                    &lookup_table_46634c[0xe5], &lookup_table_46634c[0xe6], 
                    &lookup_table_46634c[0xe7], &lookup_table_46634c[0xe8], 
                    &lookup_table_46634c[0xe9], &lookup_table_46634c[0xea], 
                    &lookup_table_46634c[0xeb], &lookup_table_46634c[0xec], 
                    &lookup_table_46634c[0xed], &lookup_table_46634c[0xee]
                if ((*(esi[0x6f] + (eax_3 << 2) - 0x360))(esi) == 0)
                    break
                
                esi[0x69] = 0
                continue
            case &lookup_table_46634c[0xfd]
                if ((*(esi[0x6f] + 0x1c))(esi) == 0)
                    break
                
                esi[0x69] = 0
                continue
        
        if (eax_4 == 0)
            break
        
        esi[0x69] = 0

return 0
