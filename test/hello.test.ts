import "mocha";
import { expect } from "chai";

import { hello } from "..";

describe("hello", function(): void {

    it("should always return 'world!'", function(): void {
        expect(hello()).to.equal("world!");
    });

});
