import { expect } from "chai";
import "mocha";

import { hello } from "..";

describe("hello", function description(): void {

    it("should always return 'world!'", function test(): void {
        expect(hello()).to.equal("world!");
    });

});
