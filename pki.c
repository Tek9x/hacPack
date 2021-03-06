#include <stdio.h>
#include <string.h>
#include "aes.h"
#include "pki.h"

const hp_keyset_t hac_keys_retail = {
    ZEROES_KEY, /* Secure Boot Key (CONSOLE UNIQUE) */
    ZEROES_KEY, /* TSEC Key (CONSOLE UNIQUE) */
    {
        ZEROES_KEY, /* Keyblob Key 00 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 01 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 02 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 03 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 04 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 05 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 06 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 07 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 08 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 09 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 10 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 11 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 12 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 13 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 14 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 15 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 16 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 17 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 18 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 19 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 20 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 21 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 22 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 23 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 24 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 25 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 26 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 27 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 28 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 29 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key 30 (CONSOLE UNIQUE) */
        ZEROES_KEY  /* Keyblob Key 31 (CONSOLE UNIQUE) */
    },
    {
        ZEROES_KEY, /* Keyblob Mac Key 00 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 01 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 02 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 03 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 04 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 05 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 06 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 07 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 08 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 09 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 10 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 11 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 12 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 13 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 14 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 15 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 16 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 17 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 18 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 19 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 20 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 21 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 22 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 23 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 24 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 25 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 26 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 27 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 28 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 29 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Mac Key 30 (CONSOLE UNIQUE) */
        ZEROES_KEY  /* Keyblob Mac Key 31 (CONSOLE UNIQUE) */
    },
    {
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 00 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 01 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 02 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 03 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 04 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 05 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 06 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 07 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 08 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 09 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 10 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 11 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 12 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 13 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 14 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 15 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 16 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 17 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 18 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 19 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 20 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 21 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 22 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 23 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 24 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 25 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 26 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 27 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 28 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 29 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB, /* Encrypted Keyblob 30 (CONSOLE UNIQUE) */
        ZEROES_ENC_KEYBLOB  /* Encrypted Keyblob 31 (CONSOLE UNIQUE) */
    },
    {
        ZEROES_KEYBLOB, /* Keyblob 00 */
        ZEROES_KEYBLOB, /* Keyblob 01 */
        ZEROES_KEYBLOB, /* Keyblob 02 */
        ZEROES_KEYBLOB, /* Keyblob 03 */
        ZEROES_KEYBLOB, /* Keyblob 04 */
        ZEROES_KEYBLOB, /* Keyblob 05 */
        ZEROES_KEYBLOB, /* Keyblob 06 */
        ZEROES_KEYBLOB, /* Keyblob 07 */
        ZEROES_KEYBLOB, /* Keyblob 08 */
        ZEROES_KEYBLOB, /* Keyblob 09 */
        ZEROES_KEYBLOB, /* Keyblob 10 */
        ZEROES_KEYBLOB, /* Keyblob 11 */
        ZEROES_KEYBLOB, /* Keyblob 12 */
        ZEROES_KEYBLOB, /* Keyblob 13 */
        ZEROES_KEYBLOB, /* Keyblob 14 */
        ZEROES_KEYBLOB, /* Keyblob 15 */
        ZEROES_KEYBLOB, /* Keyblob 16 */
        ZEROES_KEYBLOB, /* Keyblob 17 */
        ZEROES_KEYBLOB, /* Keyblob 18 */
        ZEROES_KEYBLOB, /* Keyblob 19 */
        ZEROES_KEYBLOB, /* Keyblob 20 */
        ZEROES_KEYBLOB, /* Keyblob 21 */
        ZEROES_KEYBLOB, /* Keyblob 22 */
        ZEROES_KEYBLOB, /* Keyblob 23 */
        ZEROES_KEYBLOB, /* Keyblob 24 */
        ZEROES_KEYBLOB, /* Keyblob 25 */
        ZEROES_KEYBLOB, /* Keyblob 26 */
        ZEROES_KEYBLOB, /* Keyblob 27 */
        ZEROES_KEYBLOB, /* Keyblob 28 */
        ZEROES_KEYBLOB, /* Keyblob 29 */
        ZEROES_KEYBLOB, /* Keyblob 30 */
        ZEROES_KEYBLOB  /* Keyblob 31 */
    },
    {
        ZEROES_KEY, /* Keyblob Key Source 00 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 01 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 02 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 03 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 04 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 05 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 06 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 07 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 08 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 09 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 10 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 11 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 12 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 13 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 14 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 15 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 16 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 17 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 18 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 19 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 20 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 21 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 22 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 23 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 24 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 25 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 26 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 27 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 28 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 29 (CONSOLE UNIQUE) */
        ZEROES_KEY, /* Keyblob Key Source 30 (CONSOLE UNIQUE) */
        ZEROES_KEY  /* Keyblob Key Source 31 (CONSOLE UNIQUE) */
    },
    ZEROES_KEY, /* Keyblob Mac Key Source */
    ZEROES_KEY, /* TSEC Root Key */
    {
        ZEROES_KEY, /* Master Kek Source 00 */
        ZEROES_KEY, /* Master Kek Source 01 */
        ZEROES_KEY, /* Master Kek Source 02 */
        ZEROES_KEY, /* Master Kek Source 03 */
        ZEROES_KEY, /* Master Kek Source 04 */
        ZEROES_KEY, /* Master Kek Source 05 */
        ZEROES_KEY, /* Master Kek Source 06 */
        ZEROES_KEY, /* Master Kek Source 07 */
        ZEROES_KEY, /* Master Kek Source 08 */
        ZEROES_KEY, /* Master Kek Source 09 */
        ZEROES_KEY, /* Master Kek Source 10 */
        ZEROES_KEY, /* Master Kek Source 11 */
        ZEROES_KEY, /* Master Kek Source 12 */
        ZEROES_KEY, /* Master Kek Source 13 */
        ZEROES_KEY, /* Master Kek Source 14 */
        ZEROES_KEY, /* Master Kek Source 15 */
        ZEROES_KEY, /* Master Kek Source 16 */
        ZEROES_KEY, /* Master Kek Source 17 */
        ZEROES_KEY, /* Master Kek Source 18 */
        ZEROES_KEY, /* Master Kek Source 19 */
        ZEROES_KEY, /* Master Kek Source 20 */
        ZEROES_KEY, /* Master Kek Source 21 */
        ZEROES_KEY, /* Master Kek Source 22 */
        ZEROES_KEY, /* Master Kek Source 23 */
        ZEROES_KEY, /* Master Kek Source 24 */
        ZEROES_KEY, /* Master Kek Source 25 */
        ZEROES_KEY, /* Master Kek Source 26 */
        ZEROES_KEY, /* Master Kek Source 27 */
        ZEROES_KEY, /* Master Kek Source 28 */
        ZEROES_KEY, /* Master Kek Source 29 */
        ZEROES_KEY, /* Master Kek Source 30 */
        ZEROES_KEY  /* Master Kek Source 31 */
    },
    {
        ZEROES_KEY, /* Master Kek 00 */
        ZEROES_KEY, /* Master Kek 01 */
        ZEROES_KEY, /* Master Kek 02 */
        ZEROES_KEY, /* Master Kek 03 */
        ZEROES_KEY, /* Master Kek 04 */
        ZEROES_KEY, /* Master Kek 05 */
        ZEROES_KEY, /* Master Kek 06 */
        ZEROES_KEY, /* Master Kek 07 */
        ZEROES_KEY, /* Master Kek 08 */
        ZEROES_KEY, /* Master Kek 09 */
        ZEROES_KEY, /* Master Kek 10 */
        ZEROES_KEY, /* Master Kek 11 */
        ZEROES_KEY, /* Master Kek 12 */
        ZEROES_KEY, /* Master Kek 13 */
        ZEROES_KEY, /* Master Kek 14 */
        ZEROES_KEY, /* Master Kek 15 */
        ZEROES_KEY, /* Master Kek 16 */
        ZEROES_KEY, /* Master Kek 17 */
        ZEROES_KEY, /* Master Kek 18 */
        ZEROES_KEY, /* Master Kek 19 */
        ZEROES_KEY, /* Master Kek 20 */
        ZEROES_KEY, /* Master Kek 21 */
        ZEROES_KEY, /* Master Kek 22 */
        ZEROES_KEY, /* Master Kek 23 */
        ZEROES_KEY, /* Master Kek 24 */
        ZEROES_KEY, /* Master Kek 25 */
        ZEROES_KEY, /* Master Kek 26 */
        ZEROES_KEY, /* Master Kek 27 */
        ZEROES_KEY, /* Master Kek 28 */
        ZEROES_KEY, /* Master Kek 29 */
        ZEROES_KEY, /* Master Kek 30 */
        ZEROES_KEY  /* Master Kek 31 */
    },
    ZEROES_KEY, /* Master Key Source */
    {
        ZEROES_KEY, /* Master Key 00 */
        ZEROES_KEY, /* Master Key 01 */
        ZEROES_KEY, /* Master Key 02 */
        ZEROES_KEY, /* Master Key 03 */
        ZEROES_KEY, /* Master Key 04 */
        ZEROES_KEY, /* Master Key 05 */
        ZEROES_KEY, /* Master Key 06 */
        ZEROES_KEY, /* Master Key 07 */
        ZEROES_KEY, /* Master Key 08 */
        ZEROES_KEY, /* Master Key 09 */
        ZEROES_KEY, /* Master Key 10 */
        ZEROES_KEY, /* Master Key 11 */
        ZEROES_KEY, /* Master Key 12 */
        ZEROES_KEY, /* Master Key 13 */
        ZEROES_KEY, /* Master Key 14 */
        ZEROES_KEY, /* Master Key 15 */
        ZEROES_KEY, /* Master Key 16 */
        ZEROES_KEY, /* Master Key 17 */
        ZEROES_KEY, /* Master Key 18 */
        ZEROES_KEY, /* Master Key 19 */
        ZEROES_KEY, /* Master Key 20 */
        ZEROES_KEY, /* Master Key 21 */
        ZEROES_KEY, /* Master Key 22 */
        ZEROES_KEY, /* Master Key 23 */
        ZEROES_KEY, /* Master Key 24 */
        ZEROES_KEY, /* Master Key 25 */
        ZEROES_KEY, /* Master Key 26 */
        ZEROES_KEY, /* Master Key 27 */
        ZEROES_KEY, /* Master Key 28 */
        ZEROES_KEY, /* Master Key 29 */
        ZEROES_KEY, /* Master Key 30 */
        ZEROES_KEY  /* Master Key 31 */
    },
    {
        ZEROES_KEY, /* Package1 Key 00 */
        ZEROES_KEY, /* Package1 Key 01 */
        ZEROES_KEY, /* Package1 Key 02 */
        ZEROES_KEY, /* Package1 Key 03 */
        ZEROES_KEY, /* Package1 Key 04 */
        ZEROES_KEY, /* Package1 Key 05 */
        ZEROES_KEY, /* Package1 Key 06 */
        ZEROES_KEY, /* Package1 Key 07 */
        ZEROES_KEY, /* Package1 Key 08 */
        ZEROES_KEY, /* Package1 Key 09 */
        ZEROES_KEY, /* Package1 Key 10 */
        ZEROES_KEY, /* Package1 Key 11 */
        ZEROES_KEY, /* Package1 Key 12 */
        ZEROES_KEY, /* Package1 Key 13 */
        ZEROES_KEY, /* Package1 Key 14 */
        ZEROES_KEY, /* Package1 Key 15 */
        ZEROES_KEY, /* Package1 Key 16 */
        ZEROES_KEY, /* Package1 Key 17 */
        ZEROES_KEY, /* Package1 Key 18 */
        ZEROES_KEY, /* Package1 Key 19 */
        ZEROES_KEY, /* Package1 Key 20 */
        ZEROES_KEY, /* Package1 Key 21 */
        ZEROES_KEY, /* Package1 Key 22 */
        ZEROES_KEY, /* Package1 Key 23 */
        ZEROES_KEY, /* Package1 Key 24 */
        ZEROES_KEY, /* Package1 Key 25 */
        ZEROES_KEY, /* Package1 Key 26 */
        ZEROES_KEY, /* Package1 Key 27 */
        ZEROES_KEY, /* Package1 Key 28 */
        ZEROES_KEY, /* Package1 Key 29 */
        ZEROES_KEY, /* Package1 Key 30 */
        ZEROES_KEY  /* Package1 Key 31 */
    },
    {
        ZEROES_KEY, /* Package2 Key 00 */
        ZEROES_KEY, /* Package2 Key 01 */
        ZEROES_KEY, /* Package2 Key 02 */
        ZEROES_KEY, /* Package2 Key 03 */
        ZEROES_KEY, /* Package2 Key 04 */
        ZEROES_KEY, /* Package2 Key 05 */
        ZEROES_KEY, /* Package2 Key 06 */
        ZEROES_KEY, /* Package2 Key 07 */
        ZEROES_KEY, /* Package2 Key 08 */
        ZEROES_KEY, /* Package2 Key 09 */
        ZEROES_KEY, /* Package2 Key 10 */
        ZEROES_KEY, /* Package2 Key 11 */
        ZEROES_KEY, /* Package2 Key 12 */
        ZEROES_KEY, /* Package2 Key 13 */
        ZEROES_KEY, /* Package2 Key 14 */
        ZEROES_KEY, /* Package2 Key 15 */
        ZEROES_KEY, /* Package2 Key 16 */
        ZEROES_KEY, /* Package2 Key 17 */
        ZEROES_KEY, /* Package2 Key 18 */
        ZEROES_KEY, /* Package2 Key 19 */
        ZEROES_KEY, /* Package2 Key 20 */
        ZEROES_KEY, /* Package2 Key 21 */
        ZEROES_KEY, /* Package2 Key 22 */
        ZEROES_KEY, /* Package2 Key 23 */
        ZEROES_KEY, /* Package2 Key 24 */
        ZEROES_KEY, /* Package2 Key 25 */
        ZEROES_KEY, /* Package2 Key 26 */
        ZEROES_KEY, /* Package2 Key 27 */
        ZEROES_KEY, /* Package2 Key 28 */
        ZEROES_KEY, /* Package2 Key 29 */
        ZEROES_KEY, /* Package2 Key 30 */
        ZEROES_KEY  /* Package2 Key 31 */
    },
    ZEROES_KEY, /* Package2 Key Source */
    ZEROES_KEY, /* Generate Aes Kek Source */
    ZEROES_KEY, /* Generate Aes Key Source */
    ZEROES_KEY, /* Key Area Encryption Key Source Application */
    ZEROES_KEY, /* Key Area Encryption Key Source Ocean */
    ZEROES_KEY, /* Key Area Encryption Key Source System */
    ZEROES_KEY, /* Titlekek Source */
    ZEROES_KEY, /* Headerkek Source */
    ZEROES_KEY, /* SD Card kek Source. */
    {
        ZEROES_XTS_KEY, /* SD Card Key Source, for NCAs. */
        ZEROES_XTS_KEY, /* SD Card Key Source, for saves. */
    },
    ZEROES_KEY,     /* Save MAC kek Source. */
    ZEROES_KEY,     /* Save MAC key Source. */
    ZEROES_XTS_KEY, /* Encrypted Header Key */
    ZEROES_XTS_KEY, /* Header key */
    {
        ZEROES_KEY, /* Titlekek 00 */
        ZEROES_KEY, /* Titlekek 01 */
        ZEROES_KEY, /* Titlekek 02 */
        ZEROES_KEY, /* Titlekek 03 */
        ZEROES_KEY, /* Titlekek 04 */
        ZEROES_KEY, /* Titlekek 05 */
        ZEROES_KEY, /* Titlekek 06 */
        ZEROES_KEY, /* Titlekek 07 */
        ZEROES_KEY, /* Titlekek 08 */
        ZEROES_KEY, /* Titlekek 09 */
        ZEROES_KEY, /* Titlekek 10 */
        ZEROES_KEY, /* Titlekek 11 */
        ZEROES_KEY, /* Titlekek 12 */
        ZEROES_KEY, /* Titlekek 13 */
        ZEROES_KEY, /* Titlekek 14 */
        ZEROES_KEY, /* Titlekek 15 */
        ZEROES_KEY, /* Titlekek 16 */
        ZEROES_KEY, /* Titlekek 17 */
        ZEROES_KEY, /* Titlekek 18 */
        ZEROES_KEY, /* Titlekek 19 */
        ZEROES_KEY, /* Titlekek 20 */
        ZEROES_KEY, /* Titlekek 21 */
        ZEROES_KEY, /* Titlekek 22 */
        ZEROES_KEY, /* Titlekek 23 */
        ZEROES_KEY, /* Titlekek 24 */
        ZEROES_KEY, /* Titlekek 25 */
        ZEROES_KEY, /* Titlekek 26 */
        ZEROES_KEY, /* Titlekek 27 */
        ZEROES_KEY, /* Titlekek 28 */
        ZEROES_KEY, /* Titlekek 29 */
        ZEROES_KEY, /* Titlekek 30 */
        ZEROES_KEY  /* Titlekek 31 */
    },
    {
        ZEROES_KAEKS, /* Key Area Encryption Keyset 00 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 01 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 02 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 03 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 04 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 05 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 06 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 07 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 08 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 09 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 10 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 11 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 12 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 13 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 14 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 15 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 16 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 17 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 18 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 19 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 20 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 21 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 22 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 23 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 24 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 25 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 26 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 27 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 28 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 29 */
        ZEROES_KAEKS, /* Key Area Encryption Keyset 30 */
        ZEROES_KAEKS  /* Key Area Encryption Keyset 31 */
    },
    {
        ZEROES_XTS_KEY, /* SD Card Key, for NCAs. */
        ZEROES_XTS_KEY, /* SD Card Key, for saves. */
    },
    {/* Fixed RSA key used to validate NCA signature 0. */
     0xBF, 0xBE, 0x40, 0x6C, 0xF4, 0xA7, 0x80, 0xE9, 0xF0, 0x7D, 0x0C, 0x99, 0x61, 0x1D, 0x77, 0x2F,
     0x96, 0xBC, 0x4B, 0x9E, 0x58, 0x38, 0x1B, 0x03, 0xAB, 0xB1, 0x75, 0x49, 0x9F, 0x2B, 0x4D, 0x58,
     0x34, 0xB0, 0x05, 0xA3, 0x75, 0x22, 0xBE, 0x1A, 0x3F, 0x03, 0x73, 0xAC, 0x70, 0x68, 0xD1, 0x16,
     0xB9, 0x04, 0x46, 0x5E, 0xB7, 0x07, 0x91, 0x2F, 0x07, 0x8B, 0x26, 0xDE, 0xF6, 0x00, 0x07, 0xB2,
     0xB4, 0x51, 0xF8, 0x0D, 0x0A, 0x5E, 0x58, 0xAD, 0xEB, 0xBC, 0x9A, 0xD6, 0x49, 0xB9, 0x64, 0xEF,
     0xA7, 0x82, 0xB5, 0xCF, 0x6D, 0x70, 0x13, 0xB0, 0x0F, 0x85, 0xF6, 0xA9, 0x08, 0xAA, 0x4D, 0x67,
     0x66, 0x87, 0xFA, 0x89, 0xFF, 0x75, 0x90, 0x18, 0x1E, 0x6B, 0x3D, 0xE9, 0x8A, 0x68, 0xC9, 0x26,
     0x04, 0xD9, 0x80, 0xCE, 0x3F, 0x5E, 0x92, 0xCE, 0x01, 0xFF, 0x06, 0x3B, 0xF2, 0xC1, 0xA9, 0x0C,
     0xCE, 0x02, 0x6F, 0x16, 0xBC, 0x92, 0x42, 0x0A, 0x41, 0x64, 0xCD, 0x52, 0xB6, 0x34, 0x4D, 0xAE,
     0xC0, 0x2E, 0xDE, 0xA4, 0xDF, 0x27, 0x68, 0x3C, 0xC1, 0xA0, 0x60, 0xAD, 0x43, 0xF3, 0xFC, 0x86,
     0xC1, 0x3E, 0x6C, 0x46, 0xF7, 0x7C, 0x29, 0x9F, 0xFA, 0xFD, 0xF0, 0xE3, 0xCE, 0x64, 0xE7, 0x35,
     0xF2, 0xF6, 0x56, 0x56, 0x6F, 0x6D, 0xF1, 0xE2, 0x42, 0xB0, 0x83, 0x40, 0xA5, 0xC3, 0x20, 0x2B,
     0xCC, 0x9A, 0xAE, 0xCA, 0xED, 0x4D, 0x70, 0x30, 0xA8, 0x70, 0x1C, 0x70, 0xFD, 0x13, 0x63, 0x29,
     0x02, 0x79, 0xEA, 0xD2, 0xA7, 0xAF, 0x35, 0x28, 0x32, 0x1C, 0x7B, 0xE6, 0x2F, 0x1A, 0xAA, 0x40,
     0x7E, 0x32, 0x8C, 0x27, 0x42, 0xFE, 0x82, 0x78, 0xEC, 0x0D, 0xEB, 0xE6, 0x83, 0x4B, 0x6D, 0x81,
     0x04, 0x40, 0x1A, 0x9E, 0x9A, 0x67, 0xF6, 0x72, 0x29, 0xFA, 0x04, 0xF0, 0x9D, 0xE4, 0xF4, 0x03},
    {/* Fixed RSA key used to validate ACID signatures. */
     0xDD, 0xC8, 0xDD, 0xF2, 0x4E, 0x6D, 0xF0, 0xCA, 0x9E, 0xC7, 0x5D, 0xC7, 0x7B, 0xAD, 0xFE, 0x7D,
     0x23, 0x89, 0x69, 0xB6, 0xF2, 0x06, 0xA2, 0x02, 0x88, 0xE1, 0x55, 0x91, 0xAB, 0xCB, 0x4D, 0x50,
     0x2E, 0xFC, 0x9D, 0x94, 0x76, 0xD6, 0x4C, 0xD8, 0xFF, 0x10, 0xFA, 0x5E, 0x93, 0x0A, 0xB4, 0x57,
     0xAC, 0x51, 0xC7, 0x16, 0x66, 0xF4, 0x1A, 0x54, 0xC2, 0xC5, 0x04, 0x3D, 0x1B, 0xFE, 0x30, 0x20,
     0x8A, 0xAC, 0x6F, 0x6F, 0xF5, 0xC7, 0xB6, 0x68, 0xB8, 0xC9, 0x40, 0x6B, 0x42, 0xAD, 0x11, 0x21,
     0xE7, 0x8B, 0xE9, 0x75, 0x01, 0x86, 0xE4, 0x48, 0x9B, 0x0A, 0x0A, 0xF8, 0x7F, 0xE8, 0x87, 0xF2,
     0x82, 0x01, 0xE6, 0xA3, 0x0F, 0xE4, 0x66, 0xAE, 0x83, 0x3F, 0x4E, 0x9F, 0x5E, 0x01, 0x30, 0xA4,
     0x00, 0xB9, 0x9A, 0xAE, 0x5F, 0x03, 0xCC, 0x18, 0x60, 0xE5, 0xEF, 0x3B, 0x5E, 0x15, 0x16, 0xFE,
     0x1C, 0x82, 0x78, 0xB5, 0x2F, 0x47, 0x7C, 0x06, 0x66, 0x88, 0x5D, 0x35, 0xA2, 0x67, 0x20, 0x10,
     0xE7, 0x6C, 0x43, 0x68, 0xD3, 0xE4, 0x5A, 0x68, 0x2A, 0x5A, 0xE2, 0x6D, 0x73, 0xB0, 0x31, 0x53,
     0x1C, 0x20, 0x09, 0x44, 0xF5, 0x1A, 0x9D, 0x22, 0xBE, 0x12, 0xA1, 0x77, 0x11, 0xE2, 0xA1, 0xCD,
     0x40, 0x9A, 0xA2, 0x8B, 0x60, 0x9B, 0xEF, 0xA0, 0xD3, 0x48, 0x63, 0xA2, 0xF8, 0xA3, 0x2C, 0x08,
     0x56, 0x52, 0x2E, 0x60, 0x19, 0x67, 0x5A, 0xA7, 0x9F, 0xDC, 0x3F, 0x3F, 0x69, 0x2B, 0x31, 0x6A,
     0xB7, 0x88, 0x4A, 0x14, 0x84, 0x80, 0x33, 0x3C, 0x9D, 0x44, 0xB7, 0x3F, 0x4C, 0xE1, 0x75, 0xEA,
     0x37, 0xEA, 0xE8, 0x1E, 0x7C, 0x77, 0xB7, 0xC6, 0x1A, 0xA2, 0xF0, 0x9F, 0x10, 0x61, 0xCD, 0x7B,
     0x5B, 0x32, 0x4C, 0x37, 0xEF, 0xB1, 0x71, 0x68, 0x53, 0x0A, 0xED, 0x51, 0x7D, 0x35, 0x22, 0xFD},
    {/* Fixed RSA key used to validate PK21 signatures. */
     0x8D, 0x13, 0xA7, 0x77, 0x6A, 0xE5, 0xDC, 0xC0, 0x3B, 0x25, 0xD0, 0x58, 0xE4, 0x20, 0x69, 0x59,
     0x55, 0x4B, 0xAB, 0x70, 0x40, 0x08, 0x28, 0x07, 0xA8, 0xA7, 0xFD, 0x0F, 0x31, 0x2E, 0x11, 0xFE,
     0x47, 0xA0, 0xF9, 0x9D, 0xDF, 0x80, 0xDB, 0x86, 0x5A, 0x27, 0x89, 0xCD, 0x97, 0x6C, 0x85, 0xC5,
     0x6C, 0x39, 0x7F, 0x41, 0xF2, 0xFF, 0x24, 0x20, 0xC3, 0x95, 0xA6, 0xF7, 0x9D, 0x4A, 0x45, 0x74,
     0x8B, 0x5D, 0x28, 0x8A, 0xC6, 0x99, 0x35, 0x68, 0x85, 0xA5, 0x64, 0x32, 0x80, 0x9F, 0xD3, 0x48,
     0x39, 0xA2, 0x1D, 0x24, 0x67, 0x69, 0xDF, 0x75, 0xAC, 0x12, 0xB5, 0xBD, 0xC3, 0x29, 0x90, 0xBE,
     0x37, 0xE4, 0xA0, 0x80, 0x9A, 0xBE, 0x36, 0xBF, 0x1F, 0x2C, 0xAB, 0x2B, 0xAD, 0xF5, 0x97, 0x32,
     0x9A, 0x42, 0x9D, 0x09, 0x8B, 0x08, 0xF0, 0x63, 0x47, 0xA3, 0xE9, 0x1B, 0x36, 0xD8, 0x2D, 0x8A,
     0xD7, 0xE1, 0x54, 0x11, 0x95, 0xE4, 0x45, 0x88, 0x69, 0x8A, 0x2B, 0x35, 0xCE, 0xD0, 0xA5, 0x0B,
     0xD5, 0x5D, 0xAC, 0xDB, 0xAF, 0x11, 0x4D, 0xCA, 0xB8, 0x1E, 0xE7, 0x01, 0x9E, 0xF4, 0x46, 0xA3,
     0x8A, 0x94, 0x6D, 0x76, 0xBD, 0x8A, 0xC8, 0x3B, 0xD2, 0x31, 0x58, 0x0C, 0x79, 0xA8, 0x26, 0xE9,
     0xD1, 0x79, 0x9C, 0xCB, 0xD4, 0x2B, 0x6A, 0x4F, 0xC6, 0xCC, 0xCF, 0x90, 0xA7, 0xB9, 0x98, 0x47,
     0xFD, 0xFA, 0x4C, 0x6C, 0x6F, 0x81, 0x87, 0x3B, 0xCA, 0xB8, 0x50, 0xF6, 0x3E, 0x39, 0x5D, 0x4D,
     0x97, 0x3F, 0x0F, 0x35, 0x39, 0x53, 0xFB, 0xFA, 0xCD, 0xAB, 0xA8, 0x7A, 0x62, 0x9A, 0x3F, 0xF2,
     0x09, 0x27, 0x96, 0x3F, 0x07, 0x9A, 0x91, 0xF7, 0x16, 0xBF, 0xC6, 0x3A, 0x82, 0x5A, 0x4B, 0xCF,
     0x49, 0x50, 0x95, 0x8C, 0x55, 0x80, 0x7E, 0x39, 0xB1, 0x48, 0x05, 0x1E, 0x21, 0xC7, 0x24, 0x4F}};

static void generate_kek(unsigned char *dst, const unsigned char *src, const unsigned char *master_key, const unsigned char *kek_seed, const unsigned char *key_seed)
{
    unsigned char kek[0x10];
    unsigned char src_kek[0x10];
    aes_ctx_t *master_ctx = new_aes_ctx(master_key, 0x10, AES_MODE_ECB);
    aes_decrypt(master_ctx, kek, kek_seed, 0x10);
    free_aes_ctx(master_ctx);

    aes_ctx_t *kek_ctx = new_aes_ctx(kek, 0x10, AES_MODE_ECB);
    aes_decrypt(kek_ctx, src_kek, src, 0x10);
    free_aes_ctx(kek_ctx);

    if (key_seed != NULL)
    {
        aes_ctx_t *key_ctx = new_aes_ctx(src_kek, 0x10, AES_MODE_ECB);
        aes_decrypt(key_ctx, dst, key_seed, 0x10);
        free_aes_ctx(key_ctx);
    }
    else
    {
        memcpy(dst, src_kek, 0x10);
    }
}

void pki_derive_keys(hp_keyset_t *keyset)
{
    unsigned char zeroes[0x100];
    unsigned char cmac[0x10];
    memset(zeroes, 0, 0x100);
    memset(cmac, 0, 0x10);
    /* Derive keys as necessary. */
    for (unsigned int i = 0; i < 0x6; i++)
    {
        /* Start by deriving keyblob keys. */
        if (memcmp(&keyset->secure_boot_key, zeroes, 0x10) == 0)
        {
            continue;
        }
        if (memcmp(&keyset->tsec_key, zeroes, 0x10) == 0)
        {
            continue;
        }
        if (memcmp(&keyset->keyblob_key_sources[i], zeroes, 0x10) == 0)
        {
            continue;
        }
        aes_ctx_t *sbk_ctx = new_aes_ctx(keyset->secure_boot_key, 0x10, AES_MODE_ECB);
        aes_ctx_t *tsec_ctx = new_aes_ctx(keyset->tsec_key, 0x10, AES_MODE_ECB);
        aes_decrypt(tsec_ctx, &keyset->keyblob_keys[i], &keyset->keyblob_key_sources[i], 0x10);
        aes_decrypt(sbk_ctx, &keyset->keyblob_keys[i], &keyset->keyblob_keys[i], 0x10);
        free_aes_ctx(tsec_ctx);
        free_aes_ctx(sbk_ctx);
        if (memcmp(keyset->keyblob_mac_key_source, zeroes, 0x10) == 0)
        {
            continue;
        }
        aes_ctx_t *mac_gen_ctx = new_aes_ctx(&keyset->keyblob_keys[i], 0x10, AES_MODE_ECB);
        aes_decrypt(mac_gen_ctx, &keyset->keyblob_mac_keys[i], keyset->keyblob_mac_key_source, 0x10);
        free_aes_ctx(mac_gen_ctx);
    }
    for (unsigned int i = 0; i < 0x6; i++)
    {
        /* Then we decrypt keyblobs. */
        if (memcmp(&keyset->keyblob_keys[i], zeroes, 0x10) == 0)
        {
            continue;
        }
        if (memcmp(&keyset->keyblob_mac_keys[i], zeroes, 0x10) == 0)
        {
            continue;
        }
        if (memcmp(&keyset->encrypted_keyblobs[i], zeroes, 0xB0) == 0)
        {
            continue;
        }
        aes_calculate_cmac(cmac, &keyset->encrypted_keyblobs[i][0x10], 0xA0, keyset->keyblob_mac_keys[i]);
        if (memcmp(cmac, &keyset->encrypted_keyblobs[i][0], 0x10) != 0)
        {
            fprintf(stderr, "[ WARN ] Keyblob MAC %02x is invalid. Are SBK/TSEC key correct?\n", i);
            continue;
        }
        aes_ctx_t *keyblob_ctx = new_aes_ctx(&keyset->keyblob_keys[i], 0x10, AES_MODE_CTR);
        aes_setiv(keyblob_ctx, &keyset->encrypted_keyblobs[i][0x10], 0x10);
        aes_decrypt(keyblob_ctx, &keyset->keyblobs[i], &keyset->encrypted_keyblobs[i][0x20], sizeof(keyset->keyblobs[i]));
        /* Set package1 key as relevant. */
        if (memcmp(keyset->keyblobs[i] + 0x80, zeroes, 0x10) != 0)
        {
            memcpy(&keyset->package1_keys[i], &keyset->keyblobs[i][0x80], 0x10);
        }
        /* Set master kek as relevant. */
        if (memcmp(keyset->keyblobs[i] + 0x00, zeroes, 0x10) != 0)
        {
            memcpy(&keyset->master_keks[i], &keyset->keyblobs[i][0x00], 0x10);
        }
        free_aes_ctx(keyblob_ctx);
    }
    for (unsigned int i = 0x6; i < 0x20; i++)
    {
        /* Do new keygen for 6.2.0+. */
        if (memcmp(keyset->tsec_root_key, zeroes, 0x10) == 0)
        {
            continue;
        }
        if (memcmp(keyset->master_kek_sources[i], zeroes, 0x10) == 0)
        {
            continue;
        }

        aes_ctx_t *tsec_root_ctx = new_aes_ctx(keyset->tsec_root_key, 0x10, AES_MODE_ECB);
        aes_decrypt(tsec_root_ctx, keyset->master_keks[i], keyset->master_kek_sources[i], 0x10);
        free_aes_ctx(tsec_root_ctx);
    }
    for (unsigned int i = 0; i < 0x20; i++)
    {
        /* Then we derive master keys. */
        if (memcmp(keyset->master_key_source, zeroes, 0x10) == 0)
        {
            continue;
        }
        /* We need a non-zero master kek. */
        if (memcmp(keyset->master_keks[i], zeroes, 0x10) == 0)
        {
            continue;
        }

        /* Derive Master Keys. */
        aes_ctx_t *master_gen_ctx = new_aes_ctx(&keyset->master_keks[i], 0x10, AES_MODE_ECB);
        aes_decrypt(master_gen_ctx, &keyset->master_keys[i], keyset->master_key_source, 0x10);
        free_aes_ctx(master_gen_ctx);
    }
    for (unsigned int i = 0; i < 0x20; i++)
    {
        if (memcmp(&keyset->master_keys[i], zeroes, 0x10) == 0)
        {
            continue;
        }

        aes_ctx_t *master_ctx = new_aes_ctx(&keyset->master_keys[i], 0x10, AES_MODE_ECB);

        /* Derive Key Area Encryption Keys */
        if (memcmp(keyset->key_area_key_application_source, zeroes, 0x10) != 0)
        {
            generate_kek(keyset->key_area_keys[i][0], keyset->key_area_key_application_source, keyset->master_keys[i], keyset->aes_kek_generation_source, keyset->aes_key_generation_source);
        }
        if (memcmp(keyset->key_area_key_ocean_source, zeroes, 0x10) != 0)
        {
            generate_kek(keyset->key_area_keys[i][1], keyset->key_area_key_ocean_source, keyset->master_keys[i], keyset->aes_kek_generation_source, keyset->aes_key_generation_source);
        }
        if (memcmp(keyset->key_area_key_system_source, zeroes, 0x10) != 0)
        {
            generate_kek(keyset->key_area_keys[i][2], keyset->key_area_key_system_source, keyset->master_keys[i], keyset->aes_kek_generation_source, keyset->aes_key_generation_source);
        }

        /* Derive Titlekek */
        if (memcmp(keyset->titlekek_source, zeroes, 0x10) != 0)
        {
            aes_decrypt(master_ctx, &keyset->titlekeks[i], keyset->titlekek_source, 0x10);
        }

        /* Derive Package2 Key */
        if (memcmp(keyset->package2_key_source, zeroes, 0x10) != 0)
        {
            aes_decrypt(master_ctx, &keyset->package2_keys[i], keyset->package2_key_source, 0x10);
        }

        /* Derive Header Key */
        if (i == 0 && memcmp(keyset->header_kek_source, zeroes, 0x10) != 0 && memcmp(keyset->header_key_source, zeroes, 0x20) != 0)
        {
            unsigned char header_kek[0x10];
            generate_kek(header_kek, keyset->header_kek_source, keyset->master_keys[i], keyset->aes_kek_generation_source, keyset->aes_key_generation_source);
            aes_ctx_t *header_ctx = new_aes_ctx(header_kek, 0x10, AES_MODE_ECB);
            aes_decrypt(header_ctx, keyset->header_key, keyset->header_key_source, 0x20);
            free_aes_ctx(header_ctx);
        }

        /* Derive SD Card Key */
        if (i == 0 && memcmp(keyset->sd_card_kek_source, zeroes, 0x10) != 0)
        {
            unsigned char sd_kek[0x10];
            generate_kek(sd_kek, keyset->sd_card_kek_source, keyset->master_keys[i], keyset->aes_kek_generation_source, keyset->aes_key_generation_source);
            aes_ctx_t *sd_ctx = new_aes_ctx(sd_kek, 0x10, AES_MODE_ECB);

            for (unsigned int k = 0; k < 2; k++)
            {
                if (memcmp(keyset->sd_card_key_sources[k], zeroes, 0x20) != 0)
                {
                    aes_decrypt(sd_ctx, keyset->sd_card_keys[k], keyset->sd_card_key_sources[k], 0x20);
                }
            }

            free_aes_ctx(sd_ctx);
        }

        free_aes_ctx(master_ctx);
    }
}

void pki_initialize_keyset(hp_keyset_t *keyset)
{

    memcpy(keyset, &hac_keys_retail, sizeof(*keyset));
    pki_derive_keys(keyset);
}
