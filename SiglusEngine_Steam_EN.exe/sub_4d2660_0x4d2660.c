// 函数: sub_4d2660
// 地址: 0x4d2660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = arg3
int128_t* eax_2 = arg2
void* var_6c = eax_2
int32_t edi = ebx[0x15]
int32_t edx = ebx[0x17]
void* esi = ebx[0x18]
int32_t var_4c = ebx[0x13]
int32_t ecx_1 = ebx[0x14]
int32_t var_5c = ecx_1
int32_t var_50 = ecx_1
int32_t ecx_2 = ebx[0x16]
int32_t var_60 = ecx_2
int32_t var_54 = ecx_2
int32_t ecx_3 = arg4
int32_t* var_68 = ebx
int32_t var_58 = edi
int32_t var_64 = edx
int32_t result

while (true)
    int128_t var_48
    int128_t var_38
    int128_t var_28
    int128_t var_18
    
    if (esi u>= 0x40)
        if (ecx_3 u< 0x40)
            result = 2
            break
        
        esi -= 0x40
        var_48 = *eax_2
        var_38 = eax_2[1]
        var_28 = eax_2[2]
        var_6c = &eax_2[4]
        arg4 = ecx_3 - 0x40
        var_18 = eax_2[3]
    else if (esi == 0)
        if (ecx_3 != 0)
            result = 2
            break
        
        var_48 = *ebx
        var_38 = *(ebx + 0x10)
        var_28 = *(ebx + 0x20)
        var_18 = *(ebx + 0x30)
    else
        if (ecx_3 u< esi)
            result = 2
            break
        
        sub_5f6260(&var_48, eax_2, esi)
        sub_5f6260(&var_48 + esi, ebx, 0x40 - esi)
        esi = nullptr
        arg4 = 0
    
    int32_t eax_15 =
        rol.d(((not.d(var_5c) & var_60) | (edi & var_5c)) - 0x28955b88 + var_48.d + var_4c, 7)
        + var_50
    int32_t eax_23 = rol.d(
        var_54 - 0x173848aa + ((not.d(eax_15) & var_58) | (var_50 & eax_15)) + var_48:4.d, 0xc) + eax_15
    int32_t eax_31 = rol.d(
        var_58 + 0x242070db + ((not.d(eax_23) & var_50) | (eax_23 & eax_15)) + var_48:8.d, 0x11)
        + eax_23
    int32_t eax_39 = rol.d(
        var_50 - 0x3e423112 + ((not.d(eax_31) & eax_15) | (eax_23 & eax_31)) + var_48:0xc.d, 0x16)
        + eax_31
    int32_t eax_47 =
        rol.d(eax_15 - 0xa83f051 + ((not.d(eax_39) & eax_23) | (eax_31 & eax_39)) + var_38.d, 7)
        + eax_39
    int32_t eax_55 = rol.d(
        eax_23 + 0x4787c62a + ((not.d(eax_47) & eax_31) | (eax_39 & eax_47)) + var_38:4.d, 0xc) + eax_47
    int32_t eax_63 = rol.d(
        eax_31 - 0x57cfb9ed + ((not.d(eax_55) & eax_39) | (eax_55 & eax_47)) + var_38:8.d, 0x11)
        + eax_55
    int32_t eax_71 = rol.d(
        eax_39 - 0x2b96aff + ((not.d(eax_63) & eax_47) | (eax_55 & eax_63)) + var_38:0xc.d, 0x16)
        + eax_63
    int32_t eax_79 =
        rol.d(eax_47 + 0x698098d8 + ((not.d(eax_71) & eax_55) | (eax_63 & eax_71)) + var_28.d, 7)
        + eax_71
    int32_t eax_87 = rol.d(
        eax_55 - 0x74bb0851 + ((not.d(eax_79) & eax_63) | (eax_71 & eax_79)) + var_28:4.d, 0xc) + eax_79
    int32_t eax_95 =
        rol.d(eax_63 - 0xa44f + ((not.d(eax_87) & eax_71) | (eax_87 & eax_79)) + var_28:8.d, 0x11)
        + eax_87
    int32_t eax_103 = rol.d(
        eax_71 - 0x76a32842 + ((not.d(eax_95) & eax_79) | (eax_87 & eax_95)) + var_28:0xc.d, 0x16)
        + eax_95
    int32_t ebx_2 = var_18.d
    int32_t eax_111 =
        rol.d(eax_79 + 0x6b901122 + ((not.d(eax_103) & eax_87) | (eax_95 & eax_103)) + ebx_2, 7)
        + eax_103
    int32_t eax_119 = rol.d(
        eax_87 - 0x2678e6d + ((not.d(eax_111) & eax_95) | (eax_103 & eax_111)) + var_18:4.d, 0xc)
        + eax_111
    int32_t edi_2 = var_18:8.d
    int32_t eax_127 = rol.d(
        eax_95 - 0x5986bc72 + ((not.d(eax_119) & eax_103) | (eax_119 & eax_111)) + edi_2, 0x11)
        + eax_119
    int32_t eax_135 = rol.d(
        eax_103 + 0x49b40821 + ((not.d(eax_127) & eax_111) | (eax_119 & eax_127)) + var_18:0xc.d, 
        0x16) + eax_127
    int32_t eax_143 = rol.d(
        eax_111 - 0x9e1da9e + ((not.d(eax_119) & eax_127) | (eax_119 & eax_135)) + var_48:4.d, 5)
        + eax_135
    int32_t eax_151 = rol.d(
        eax_119 - 0x3fbf4cc0 + ((not.d(eax_127) & eax_135) | (eax_127 & eax_143)) + var_38:8.d, 9)
        + eax_143
    int32_t eax_159 = rol.d(
        eax_127 + 0x265e5a51 + ((not.d(eax_135) & eax_143) | (eax_151 & eax_135)) + var_28:0xc.d, 
        0xe) + eax_151
    int32_t eax_167 = rol.d(
        eax_135 - 0x16493856 + ((not.d(eax_143) & eax_151) | (eax_159 & eax_143)) + var_48.d, 0x14)
        + eax_159
    int32_t eax_175 = rol.d(
        eax_143 - 0x29d0efa3 + ((not.d(eax_151) & eax_159) | (eax_151 & eax_167)) + var_38:4.d, 5)
        + eax_167
    int32_t eax_183 = rol.d(
        eax_151 + 0x2441453 + ((not.d(eax_159) & eax_167) | (eax_159 & eax_175)) + var_28:8.d, 9)
        + eax_175
    int32_t eax_191 = rol.d(
        eax_159 - 0x275e197f + ((not.d(eax_167) & eax_175) | (eax_183 & eax_167)) + var_18:0xc.d, 
        0xe) + eax_183
    int32_t eax_199 = rol.d(
        eax_167 - 0x182c0438 + ((not.d(eax_175) & eax_183) | (eax_191 & eax_175)) + var_38.d, 0x14)
        + eax_191
    int32_t eax_207 = rol.d(
        eax_175 + 0x21e1cde6 + ((not.d(eax_183) & eax_191) | (eax_183 & eax_199)) + var_28:4.d, 5)
        + eax_199
    int32_t eax_215 =
        rol.d(eax_183 - 0x3cc8f82a + ((not.d(eax_191) & eax_199) | (eax_191 & eax_207)) + edi_2, 9)
        + eax_207
    int32_t eax_223 = rol.d(
        eax_191 - 0xb2af279 + ((not.d(eax_199) & eax_207) | (eax_215 & eax_199)) + var_48:0xc.d, 
        0xe) + eax_215
    int32_t eax_231 = rol.d(
        eax_199 + 0x455a14ed + ((not.d(eax_207) & eax_215) | (eax_223 & eax_207)) + var_28.d, 0x14)
        + eax_223
    int32_t eax_239 = rol.d(
        eax_207 - 0x561c16fb + ((not.d(eax_215) & eax_223) | (eax_215 & eax_231)) + var_18:4.d, 5)
        + eax_231
    int32_t eax_247 = rol.d(
        eax_215 - 0x3105c08 + ((not.d(eax_223) & eax_231) | (eax_223 & eax_239)) + var_48:8.d, 9)
        + eax_239
    int32_t eax_255 = rol.d(
        eax_223 + 0x676f02d9 + ((not.d(eax_231) & eax_239) | (eax_247 & eax_231)) + var_38:0xc.d, 
        0xe) + eax_247
    int32_t eax_263 = rol.d(
        eax_231 - 0x72d5b376 + ((not.d(eax_239) & eax_247) | (eax_255 & eax_239)) + ebx_2, 0x14)
        + eax_255
    int32_t eax_269 =
        rol.d(eax_239 - 0x5c6be + (eax_247 ^ eax_255 ^ eax_263) + var_38:4.d, 4) + eax_263
    int32_t eax_275 =
        rol.d(eax_247 - 0x788e097f + (eax_255 ^ eax_263 ^ eax_269) + var_28.d, 0xb) + eax_269
    int32_t eax_281 =
        rol.d(eax_255 + 0x6d9d6122 + (eax_275 ^ eax_263 ^ eax_269) + var_28:0xc.d, 0x10) + eax_275
    int32_t eax_287 =
        rol.d(eax_263 - 0x21ac7f4 + (eax_275 ^ eax_281 ^ eax_269) + edi_2, 0x17) + eax_281
    int32_t eax_293 =
        rol.d(eax_269 - 0x5b4115bc + (eax_275 ^ eax_281 ^ eax_287) + var_48:4.d, 4) + eax_287
    int32_t eax_299 =
        rol.d(eax_275 + 0x4bdecfa9 + (eax_281 ^ eax_287 ^ eax_293) + var_38.d, 0xb) + eax_293
    int32_t eax_305 =
        rol.d(eax_281 - 0x944b4a0 + (eax_299 ^ eax_287 ^ eax_293) + var_38:0xc.d, 0x10) + eax_299
    int32_t eax_311 =
        rol.d(eax_287 - 0x41404390 + (eax_299 ^ eax_305 ^ eax_293) + var_28:8.d, 0x17) + eax_305
    int32_t eax_317 =
        rol.d(eax_293 + 0x289b7ec6 + (eax_299 ^ eax_305 ^ eax_311) + var_18:4.d, 4) + eax_311
    int32_t eax_323 =
        rol.d(eax_299 - 0x155ed806 + (eax_305 ^ eax_311 ^ eax_317) + var_48.d, 0xb) + eax_317
    int32_t eax_329 =
        rol.d(eax_305 - 0x2b10cf7b + (eax_323 ^ eax_311 ^ eax_317) + var_48:0xc.d, 0x10) + eax_323
    int32_t eax_335 =
        rol.d(eax_311 + 0x4881d05 + (eax_323 ^ eax_329 ^ eax_317) + var_38:8.d, 0x17) + eax_329
    int32_t eax_341 =
        rol.d(eax_317 - 0x262b2fc7 + (eax_323 ^ eax_329 ^ eax_335) + var_28:4.d, 4) + eax_335
    int32_t eax_347 =
        rol.d(eax_323 - 0x1924661b + (eax_329 ^ eax_335 ^ eax_341) + ebx_2, 0xb) + eax_341
    int32_t eax_353 =
        rol.d(eax_329 + 0x1fa27cf8 + (eax_347 ^ eax_335 ^ eax_341) + var_18:0xc.d, 0x10) + eax_347
    int32_t eax_359 =
        rol.d(eax_335 - 0x3b53a99b + (eax_347 ^ eax_353 ^ eax_341) + var_48:8.d, 0x17) + eax_353
    int32_t eax_365 =
        rol.d(eax_341 - 0xbd6ddbc + ((not.d(eax_347) | eax_359) ^ eax_353) + var_48.d, 6) + eax_359
    int32_t eax_371 =
        rol.d(eax_347 + 0x432aff97 + ((not.d(eax_353) | eax_365) ^ eax_359) + var_38:0xc.d, 0xa)
        + eax_365
    int32_t eax_377 =
        rol.d(eax_353 - 0x546bdc59 + ((not.d(eax_359) | eax_371) ^ eax_365) + edi_2, 0xf) + eax_371
    int32_t eax_383 =
        rol.d(eax_359 - 0x36c5fc7 + ((not.d(eax_365) | eax_377) ^ eax_371) + var_38:4.d, 0x15)
        + eax_377
    int32_t eax_389 =
        rol.d(eax_365 + 0x655b59c3 + ((not.d(eax_371) | eax_383) ^ eax_377) + ebx_2, 6) + eax_383
    int32_t eax_395 =
        rol.d(eax_371 - 0x70f3336e + ((not.d(eax_377) | eax_389) ^ eax_383) + var_48:0xc.d, 0xa)
        + eax_389
    int32_t eax_401 =
        rol.d(eax_377 - 0x100b83 + ((not.d(eax_383) | eax_395) ^ eax_389) + var_28:8.d, 0xf)
        + eax_395
    int32_t eax_407 =
        rol.d(eax_383 - 0x7a7ba22f + ((not.d(eax_389) | eax_401) ^ eax_395) + var_48:4.d, 0x15)
        + eax_401
    int32_t eax_413 =
        rol.d(eax_389 + 0x6fa87e4f + ((not.d(eax_395) | eax_407) ^ eax_401) + var_28.d, 6) + eax_407
    int32_t eax_419 =
        rol.d(eax_395 - 0x1d31920 + ((not.d(eax_401) | eax_413) ^ eax_407) + var_18:0xc.d, 0xa)
        + eax_413
    int32_t eax_425 =
        rol.d(eax_401 - 0x5cfebcec + ((not.d(eax_407) | eax_419) ^ eax_413) + var_38:8.d, 0xf)
        + eax_419
    int32_t eax_431 =
        rol.d(eax_407 + 0x4e0811a1 + ((not.d(eax_413) | eax_425) ^ eax_419) + var_18:4.d, 0x15)
        + eax_425
    int32_t eax_437 =
        rol.d(eax_413 - 0x8ac817e + ((not.d(eax_419) | eax_431) ^ eax_425) + var_38.d, 6) + eax_431
    int32_t eax_443 =
        rol.d(eax_419 - 0x42c50dcb + ((not.d(eax_425) | eax_437) ^ eax_431) + var_28:0xc.d, 0xa)
        + eax_437
    int32_t eax_449 =
        rol.d(eax_425 + 0x2ad7d2bb + ((not.d(eax_431) | eax_443) ^ eax_437) + var_48:8.d, 0xf)
        + eax_443
    edi += eax_449
    ecx_3 = arg4
    edx = var_64
    ebx = var_68
    var_4c += eax_437
    int32_t eax_459 =
        rol.d(eax_431 - 0x14792c6f + ((not.d(eax_437) | eax_449) ^ eax_443) + var_28:4.d, 0x15)
        + eax_449 + var_5c
    var_5c = eax_459
    var_50 = eax_459
    int32_t eax_461 = eax_443 + var_60
    var_58 = edi
    var_60 = eax_461
    var_54 = eax_461
    
    if (ecx_3 == 0)
        result = 0
        break
    
    int32_t temp0_1 = edx
    edx -= 1
    var_64 = edx
    
    if (temp0_1 == 1)
        result = 1
        break
    
    eax_2 = var_6c

ebx[0x13] = var_4c
ebx[0x14] = var_5c
ebx[0x15] = edi
ebx[0x16] = var_60
ebx[0x18] = esi
ebx[0x17] = edx
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
